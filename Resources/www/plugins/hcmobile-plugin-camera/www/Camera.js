cordova.define("hcmobile-plugin-camera.camera", function(require, exports, module) {
var exec = require('cordova/exec');
var cameraExport = {};
cameraExport.takePhoto  = function (successCallback, errorCallback, saveToAlbum, maxSize) {
    exec(successCallback, errorCallback, 'Camera', 'takePhoto', [saveToAlbum, maxSize])
};

cameraExport.shootVideo = function (successCallback, errorCallback , saveToAlbum ) {
    exec(successCallback, errorCallback, 'Camera', 'shootVideo', [saveToAlbum]);
};

module.exports = cameraExport;
});
