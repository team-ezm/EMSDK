console.log("请输入你的调试代码 可以方便的调试平台接口: navigator.xx.funcation()")
navigator.notification.alert("你的消息体", function (info) {
    console.log("success")
}, "你的title", "确认按钮显示的文字");
