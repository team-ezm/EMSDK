

;(function () {

    var logger = {

        /**
         * Logs a message at the LOG level.
         *
         * Parameters passed after message are used applied to
         * the message with utils.format()
         */
        log: function (message) {
            this.logWithArgs("LOG", arguments);
        },

        /**
         * Logs a message at the ERROR level.
         *
         * Parameters passed after message are used applied to
         * the message with utils.format()
         */
        error: function (message) {
            this.logWithArgs("ERROR", arguments);
        },

        /**
         * Logs a message at the WARN level.
         *
         * Parameters passed after message are used applied to
         * the message with utils.format()
         */
        warn: function (message) {
            this.logWithArgs("WARN", arguments);
        },

        /**
         * Logs a message at the INFO level.
         *
         * Parameters passed after message are used applied to
         * the message with utils.format()
         */
        info: function (message) {
            this.logWithArgs("INFO", arguments);
        },

        /**
         * Logs a message at the DEBUG level.
         *
         * Parameters passed after message are used applied to
         * the message with utils.format()
         */
        debug: function (message) {
            this.logWithArgs("DEBUG", arguments);
        },


        __init: function () {
            for (var i = 0; i < this.levels.length; i++) {
                var level = this.levels[i];
                this.levelsMap[level] = 1 << i;
            }
            this.currentLevel = this.levelsMap.LOG


            var WinConsole = window.console;
            for (var key in WinConsole) {
                if (typeof WinConsole[key] == "function" && Object.prototype.hasOwnProperty.call(logger, key)) {
                    WinConsole[key] = wrappedOrigCall(WinConsole[key], logger[key]);
                }
            }

            // return a new function that calls both functions passed as args
            function wrappedOrigCall(orgFunc, newFunc) {
                return function () {
                    var args = [].slice.call(arguments);
                    try {
                        newFunc.apply(logger, args);
                    } catch (e) {
                    }
                    try {
                        if (args.length > 1 && args[1] === 'cordovajs') {
                            args.pop()
                        }
                        orgFunc.apply(WinConsole, args);
                    } catch (e) {
                    }

                };
            }
        },
        levels: [
            'LOG',
            'ERROR',
            'WARN',
            'INFO',
            'DEBUG'
        ],
        levelsMap: {},
        currentLevel: '',
        formatStringForCurrentLevel: function () {
            return this.levels[this.currentLevel];
        },

        // log at the specified level with args
        logWithArgs: function (level, args) {
            args = [level].concat([].slice.call(args));
            this.logLevel.apply(this, args);
        },

        // return the correct formatString for an object
        formatStringForMessage: function (message) {
            return (typeof message === "string") ? "" : "%o";
        },

        /**
         * Logs a message at the specified level.
         *
         * Parameters passed after message are used applied to
         * the message with utils.format()
         */
        logLevel: function (level /* , ... */) {

            // format the message with the parameters
            var formatArgs = [].slice.call(arguments, 1);
            var fmtString = this.formatStringForMessage(formatArgs[0]);
            if (fmtString.length > 0) {
                formatArgs.unshift(fmtString); // add formatString
            }

            var flag = 2;

            if (formatArgs.length > 1 && formatArgs[1] === 'cordovajs') {
                formatArgs.pop();
                flag = 1;
            }

            var message = this.format.apply(this.format, formatArgs);

            if (this.levelsMap[level] === null) {
                throw new Error("invalid logging level: " + level);
            }

            if (this.currentLevel > this.levelsMap[level]) return;

            // Log using the native logger if that is enabled
            window.webkit.messageHandlers.console.postMessage([this.currentLevel, message, flag])

        },


        /**
         * Formats a string and arguments following it ala console.log()
         *
         * Any remaining arguments will be appended to the formatted string.
         *
         * for rationale, see FireBug's Console API:
         *    http://getfirebug.com/wiki/index.php/Console_API
         */
        format: function (formatString, args) {
            return logger.__format(arguments[0], [].slice.call(arguments, 1)).join(' ');
        },


        /**
         * Formats a string and arguments following it ala vsprintf()
         *
         * format chars:
         *   %j - format arg as JSON
         *   %o - format arg as JSON
         *   %c - format arg as ''
         *   %% - replace with '%'
         * any other char following % will format it's
         * arg via toString().
         *
         * Returns an array containing the formatted string and any remaining
         * arguments.
         */
        __format: function (formatString, args) {
            if (formatString === null || formatString === undefined) return [""];
            if (arguments.length === 1) return [formatString.toString()];

            if (typeof formatString != "string")
                formatString = formatString.toString();

            var pattern = /(.*?)%(.)(.*)/;
            var rest = formatString;
            var result = [];

            while (args.length) {
                var match = pattern.exec(rest);
                if (!match) break;

                var arg = args.shift();
                rest = match[3];
                result.push(match[1]);

                if (match[2] === '%') {
                    result.push('%');
                    args.unshift(arg);
                    continue;
                }

                result.push(this.__formatted(arg, match[2]));
            }

            result.push(rest);

            var remainingArgs = [].slice.call(args);
            remainingArgs.unshift(result.join(''));
            return remainingArgs;
        },

        __formatted: function (object, formatChar) {

            try {
                switch (formatChar) {
                    case 'j':
                    case 'o':
                        if (object instanceof TypeError){
                            return `${object.name}: ${object.message}`;
                        } else {
                            return JSON.stringify(object);
                        }
                    case 'c':
                        return '';
                }
            } catch (e) {
                return "error JSON.stringify()ing argument: " + e;
            }
            if ((object === null) || (object === undefined)) {
                return Object.prototype.toString.call(object);
            }

            return object.toString();
        },


    }
    logger.__init();


    window.ezmjs = {
        set logLevel(level) {
            if (arguments.length) {
                if (logger.levelsMap[level] === null || logger.levelsMap[level] === undefined) {
                    throw new Error("invalid logging level: " + level);
                }
                logger.currentLevel = logger.levelsMap[level]
            }
        },
        get logLevel() {
            return logger.formatStringForCurrentLevel();
        },
        env:{}
    };

})();

