cordova.define("hcmobile-plugin-videoPreviewer.VideoPreviewer", function(require, exports, module) {
var exec = require('cordova/exec');

exports.preview = function(url,videoTitle, successCallback, errorCallback) {
    exec(successCallback, errorCallback, "DocumentPreviewer", "video", [{url:url,videoTitle:videoTitle}]);
}



});
