cordova.define("hcmobile-plugin-appinfo.AppInfo", function(require, exports, module) {

var exec = require('cordova/exec');
var argscheck = require('cordova/argscheck');
/** 获取应用相关信息 */
exports.getInfo = function(successCallback, errorCallback) {
     argscheck.checkArgs('FF', 'appInfo.getInfo', arguments);
    return exec(successCallback, errorCallback, "AppInfo", "getAppInfo",[]);
}

});
