cordova.define("hcmobile-plugin-scanner.scanner", function(require, exports, module) {
var exec = require('cordova/exec');
var argscheck = require('cordova/argscheck');

/**扫描二维码/条形码*/
exports.scan = function(success, error) {
    argscheck.checkArgs('FF', 'scanner.scan', arguments);
    exec(success, error, "Scanner", "scan", []);
};

/**生成条形码,默认CODE128类型条码*/
exports.createBarCode = function(success, error,option) {
    argscheck.checkArgs('FFO', 'scanner.createBarCode', arguments);
    if(option == undefined || option == null){
        var content = "";
        var width = 200;
        var height = 100;
        var format = Scanner.BarcodeFormat.CODE_128;
        exec(success, error, "Scanner", "createBarcode", [content,width,height,false,format]);

    }else{
        var content = option.content;
        var width = option.width;
        var height = option.height;
        var format = option.format;
        if(content == undefined){
            content = "";
        }
        if(width == undefined){
            width = 200;
        }
        if(height == undefined){
            height = 100;
        }

        if(format == undefined){
            format = Scanner.BarcodeFormat.CODE_128;
        }
        exec(success, error, "Scanner", "createBarcode", [content,width,height,false,format]);
    }
};

/**生成二维码，默认QRCODE二维码*/
exports.create2DCode = function(success, error,option) {
    argscheck.checkArgs('FFO', 'scanner.create2DCode', arguments);
 if(option == undefined || option == null){
        var content = "";
        var width= 100;
        var height = 100;
        var hasLogo = false;
        var format = Scanner.BarcodeFormat.QR_CODE;
        exec(success, error, "Scanner", "createBarcode", [content,width,height,hasLogo,format]);

    }else{
        var content = option.content;
        var width = option.width;
        var height = option.height;
        var hasLogo = option.hasLogo;
        var format = option.format;
        if(content == undefined){
            content = "";
        }
        if(width == undefined){
            width = 100;
        }
        if(height == undefined){
            height = 100;
        }
        if(hasLogo == undefined){
            hasLogo = false;
        }
        if(format == undefined){
            format = Scanner.BarcodeFormat.QR_CODE;
        }

        exec(success, error, "Scanner", "createBarcode", [content,width,height,hasLogo,format]);
    }
};

});
