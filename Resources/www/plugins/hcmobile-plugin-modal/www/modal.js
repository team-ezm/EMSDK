cordova.define("hcmobile-plugin-modal.Modal", function(require, exports, module) {

var exec = require('cordova/exec');
var argscheck = require('cordova/argscheck');
/**提示消息*/
exports.toast = function(message, duration){
    argscheck.checkArgs('sN', 'modal.toast', arguments);
    exec(null,null,"Modal","toast",[message,duration]);
}



});
