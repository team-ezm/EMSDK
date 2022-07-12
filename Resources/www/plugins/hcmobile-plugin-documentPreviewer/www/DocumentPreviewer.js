cordova.define("hcmobile-plugin-documentPreviewer.DocumentPreviewer", function(require, exports, module) {
var exec = require('cordova/exec');

exports.preview = function(url, successCallback, errorCallback) {
    alert('3333')
    exec(successCallback, errorCallback, "DocumentPreviewer", "document", [{url:url}]);
}


});
