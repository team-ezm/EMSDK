cordova.define("hcmobile-plugin-documentPreviewer.iosDocumentPreviewer", function(require, exports, module) {
var exec = require('cordova/exec');

exports.preview = function(url, successCallback, errorCallback) {
    alert('22222')
    exec(successCallback, errorCallback, "DocumentPreviewer", "preview", [{url:url}]);
}


});
