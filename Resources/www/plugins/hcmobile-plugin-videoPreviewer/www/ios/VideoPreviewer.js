cordova.define("hcmobile-plugin-videoPreviewer.iosVideoPreviewer", function(require, exports, module) {
var exec = require('cordova/exec');
var argscheck = require('cordova/argscheck');

exports.preview = function(url,videoTitle, successCallback, errorCallback) {
    argscheck.checkArgs('sSFF', 'videoPreviewer.preview', arguments);
    exec(successCallback, errorCallback, "VideoPreviewer", "preview", [{url:url,videoTitle:videoTitle}]);
}



});
