cordova.define('cordova/plugin_list', function (require, exports, module) {
    module.exports = [
        { "id": "hcmobile-plugin-scanner.Scanner", "file": "plugins/hcmobile-plugin-scanner/www/BarcodeFormat.js", "pluginId": "hcmobile-plugin-scanner", "clobbers": ["Scanner"] },
        { "id": "hcmobile-plugin-scanner.scanner", "file": "plugins/hcmobile-plugin-scanner/www/Scanner.js", "pluginId": "hcmobile-plugin-scanner", "clobbers": ["navigator.scanner"] },
        { "id": "hcmobile-plugin-documentPreviewer.DocumentPreviewer", "file": "plugins/hcmobile-plugin-documentPreviewer/www/DocumentPreviewer.js", "pluginId": "hcmobile-plugin-documentPreviewer", "merges": ["navigator.documentPreviewer"] }, { "id": "hcmobile-plugin-documentPreviewer.iosDocumentPreviewer", "file": "plugins/hcmobile-plugin-documentPreviewer/www/ios/DocumentPreviewer.js", "pluginId": "hcmobile-plugin-documentPreviewer", "merges": ["navigator.documentPreviewer"] },
        { "id": "hcmobile-plugin-appinfo.AppInfo", "file": "plugins/hcmobile-plugin-appinfo/www/appInfo.js", "pluginId": "hcmobile-plugin-appinfo", "clobbers": ["navigator.appInfo"] },
        {
            "id": "hcmobile-plugin-file-base.DirectoryEntry",
            "file": "plugins/hcmobile-plugin-file-base/www/DirectoryEntry.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.DirectoryEntry"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.DirectoryReader",
            "file": "plugins/hcmobile-plugin-file-base/www/DirectoryReader.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.DirectoryReader"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.Entry",
            "file": "plugins/hcmobile-plugin-file-base/www/Entry.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.Entry"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.File",
            "file": "plugins/hcmobile-plugin-file-base/www/File.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.File"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.FileEntry",
            "file": "plugins/hcmobile-plugin-file-base/www/FileEntry.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.FileEntry"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.FileError",
            "file": "plugins/hcmobile-plugin-file-base/www/FileError.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.FileError"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.FileReader",
            "file": "plugins/hcmobile-plugin-file-base/www/FileReader.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.FileReader"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.FileSystem",
            "file": "plugins/hcmobile-plugin-file-base/www/FileSystem.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.FileSystem"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.FileUploadOptions",
            "file": "plugins/hcmobile-plugin-file-base/www/FileUploadOptions.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.FileUploadOptions"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.FileUploadResult",
            "file": "plugins/hcmobile-plugin-file-base/www/FileUploadResult.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.FileUploadResult"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.FileWriter",
            "file": "plugins/hcmobile-plugin-file-base/www/FileWriter.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.FileWriter"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.Flags",
            "file": "plugins/hcmobile-plugin-file-base/www/Flags.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.Flags"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.LocalFileSystem",
            "file": "plugins/hcmobile-plugin-file-base/www/LocalFileSystem.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.LocalFileSystem"
            ],
            "merges": [
                "window"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.Metadata",
            "file": "plugins/hcmobile-plugin-file-base/www/Metadata.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.Metadata"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.ProgressEvent",
            "file": "plugins/hcmobile-plugin-file-base/www/ProgressEvent.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.ProgressEvent"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.fileSystems",
            "file": "plugins/hcmobile-plugin-file-base/www/fileSystems.js",
            "pluginId": "hcmobile-plugin-file-base"
        },
        {
            "id": "hcmobile-plugin-file-base.requestFileSystem",
            "file": "plugins/hcmobile-plugin-file-base/www/requestFileSystem.js",
            "pluginId": "hcmobile-plugin-file-base",
            "clobbers": [
                "window.requestFileSystem"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.resolveLocalFileSystemURI",
            "file": "plugins/hcmobile-plugin-file-base/www/resolveLocalFileSystemURI.js",
            "pluginId": "hcmobile-plugin-file-base",
            "merges": [
                "window"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.iosFileSystem",
            "file": "plugins/hcmobile-plugin-file-base/www/ios/FileSystem.js",
            "pluginId": "hcmobile-plugin-file-base",
            "merges": [
                "FileSystem"
            ]
        },
        {
            "id": "hcmobile-plugin-file-base.fileSystems-roots",
            "file": "plugins/hcmobile-plugin-file-base/www/fileSystems-roots.js",
            "pluginId": "hcmobile-plugin-file-base",
            "runs": true
        },
        {
            "id": "hcmobile-plugin-file-base.fileSystemPaths",
            "file": "plugins/hcmobile-plugin-file-base/www/fileSystemPaths.js",
            "pluginId": "hcmobile-plugin-file-base",
            "merges": [
                "cordova"
            ],
            "runs": true
        },
        {
            "id": "hcmobile-plugin-center.MobileCenter",
            "file": "plugins/hcmobile-plugin-center/www/MobileCenter.js",
            "pluginId": "hcmobile-plugin-center",
            "merges": [
                "navigator.mobileCenter"
            ]
        },
        {
            "id": "hcmobile-plugin-center.StatusBar",
            "file": "plugins/hcmobile-plugin-center/www/StatusBar.js",
            "pluginId": "hcmobile-plugin-center",
            "merges": [
                "navigator.statusbar"
            ]
        },
        {
            "id": "hcmobile-plugin-file-transfer.FileTransferError",
            "file": "plugins/hcmobile-plugin-file-transfer/www/FileTransferError.js",
            "pluginId": "hcmobile-plugin-file-transfer",
            "clobbers": [
                "window.FileTransferError"
            ]
        },
        {
            "id": "hcmobile-plugin-file-transfer.FileTransfer",
            "file": "plugins/hcmobile-plugin-file-transfer/www/FileTransfer.js",
            "pluginId": "hcmobile-plugin-file-transfer",
            "clobbers": [
                "window.FileTransfer"
            ]
        },
        {
            "id": "hcmobile-plugin-miniProgram.miniProgram",
            "file": "plugins/hcmobile-plugin-miniProgram/www/miniProgram.js",
            "pluginId": "hcmobile-plugin-miniProgram",
            "clobbers": [
                "navigator.miniProgram"
            ]
        },
        {
            "id": "hcmobile-plugin-camera.camera",
            "file": "plugins/hcmobile-plugin-camera/www/Camera.js",
            "pluginId": "hcmobile-plugin-camera",
            "clobbers": [
                "navigator.camera"
            ]
        },
      {
        "id": "hcmobile-plugin-modal.Modal",
        "file": "plugins/hcmobile-plugin-modal/www/modal.js",
        "pluginId": "hcmobile-plugin-modal",
        "clobbers": [
          "navigator.modal"
        ]
      },
      {
         "id": "hcmobile-plugin-videoPreviewer.VideoPreviewer",
         "file": "plugins/hcmobile-plugin-videoPreviewer/www/VideoPreviewer.js",
         "pluginId": "hcmobile-plugin-videoPreviewer",
         "merges": [
           "navigator.videoPreviewer"
         ]
       },
       {
         "id": "hcmobile-plugin-videoPreviewer.iosVideoPreviewer",
         "file": "plugins/hcmobile-plugin-videoPreviewer/www/ios/VideoPreviewer.js",
         "pluginId": "hcmobile-plugin-videoPreviewer",
         "merges": [
           "navigator.videoPreviewer"
         ]
       }

    ];
    module.exports.metadata =
    // TOP OF METADATA
    {
        "hcmobile-plugin-file-base": "0.0.0",
        "hcmobile-plugin-center": "0.0.0",
        "hcmobile-plugin-file-transfer": "0.0.0",
        "hcmobile-plugin-app": "0.0.0",
        "hcmobile-plugin-scanner": "0.0.0",
        "hcmobile-plugin-miniProgram": "0.0.0",
        "hcmobile-plugin-documentPreviewer": "0.0.0",
        "hcmobile-plugin-appinfo": "0.0.0",
        "hcmobile-plugin-camera": "0.0.0",
        "hcmobile-plugin-modal": "0.0.0",
        "hcmobile-plugin-videoPreviewer": "0.0.0"

    };
    // BOTTOM OF METADATA
});
