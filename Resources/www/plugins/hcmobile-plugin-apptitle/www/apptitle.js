cordova.define("hcmobile-plugin-apptitle.AppTitle", function(require, exports, module) {

var exec = require('cordova/exec');
var argscheck = require('cordova/argscheck');


/*
原生ui点击返回执行此方法
开发者可以重写此方法达到他们的意图
*/
exports.clickBack = function (){
 cordova.exec(null, null, "AppTitle", "clickBack", []);
};

/*
原生ui点击更多操作执行此方法
开发者可以重写此方法达到他们的意图
*/
exports.clickMore = function() {
 cordova.exec(null, null, "AppTitle", "clickMore", []);
};

/*
config
{
"toolbarTitle":"title内容显示",
"toolbarBackColor":"title栏背景颜色",
"isShowBackBtn":"是否显示返回按钮",
"toolbarMode":"light 导航栏字体，状态栏字体，白色(亮色)  or dark 导航栏字体，状态栏字体黑色（暗色)",
"isHideToolBar":"是否显示导航栏",
"isHideFunctionButton":"是否显示原子按键，更多(按钮)",
"isHideButtonLine":"是否显示导航栏下划线"
}
*/
exports.configTitle = function (config,success,error) {
argscheck.checkArgs('oFF', 'apptittle.configTitle', arguments);
cordova.exec(null, null, "AppTitle", "configTitle", [config]);
};
    
});
