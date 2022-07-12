#!/bin/sh
path="Frameworks/"



writeXmlNode(){
    xml=''
    js=''
    case $1 in
    "AppInfo")
        xml='<feature name="AppInfo"><param name="ios-package" value="YDMAppInfo" /></feature>'
        js='{"id": "hcmobile-plugin-appinfo.AppInfo","file": "plugins/hcmobile-plugin-appinfo/www/appInfo.js","pluginId": "hcmobile-plugin-appinfo","clobbers": ["navigator.appInfo"]},'
    ;;
    "DocumentPreviewer")
        xml='<feature name="DocumentPreviewer"><param name="ios-package" value="YDMDocumentPreviewer" /></feature>'
        js='{"id": "hcmobile-plugin-documentPreviewer.DocumentPreviewer","file": "plugins/hcmobile-plugin-documentPreviewer/www/DocumentPreviewer.js","pluginId": "hcmobile-plugin-documentPreviewer","merges": ["navigator.documentPreviewer"]},{"id": "hcmobile-plugin-documentPreviewer.iosDocumentPreviewer","file": "plugins/hcmobile-plugin-documentPreviewer/www/ios/DocumentPreviewer.js","pluginId": "hcmobile-plugin-documentPreviewer","merges": ["navigator.documentPreviewer"]},'
    ;;
    "Scanner")
        xml='<feature name="Scanner"><param name="ios-package" value="Scanner" /></feature>'
        js='{"id": "hcmobile-plugin-scanner.Scanner","file": "plugins/hcmobile-plugin-scanner/www/BarcodeFormat.js","pluginId": "hcmobile-plugin-scanner","clobbers": ["Scanner"]},'
    ;;
    "FileTransfer")
        xml='<feature name="FileTransfer"><param name="ios-package" value="CDVFileTransfer" /></feature>'
        js='{"id": "hcmobile-plugin-scanner.scanner","file": "plugins/hcmobile-plugin-scanner/www/Scanner.js","pluginId": "hcmobile-plugin-scanner","clobbers": ["navigator.scanner"]},'
    ;;
    "Modal")
    xml='<feature name="Modal"><param name="ios-package" value="YDMModal" /></feature>'
    js='{"id": "hcmobile-plugin-modal.Modal","file": "plugins/hcmobile-plugin-modal/www/modal.js","pluginId": "hcmobile-plugin-modal","clobbers": ["navigator.modal"]},'
    ;;
    esac
    
    
    if [[ $xml != '' ]] && [[ $js != '' ]]  && [[ `grep -c $1 Resources/config.xml` -eq 0 ]]
    then
        sed -i "" "3 i\ 
        $xml
        " Resources/config.xml
        
        sed -i "" "3 i\ 
        $js
        " Resources/www/cordova_plugins.js
    fi
    
}







for file in $path*
do
    extension=${file##*.}
    if [[ -d $file ]] && [[ $extension == $file  ]]
    then
        name=`echo ${file##*/}`
        echo $name
        writeXmlNode $name
    fi
done

`sed -i "" '1d' Resources/www/ezm.js`

file=`md5sum Resources/config.xml|cut -d" " -f1`

sed -i "" "1 i\ 
//$file
" Resources/www/ezm.js

