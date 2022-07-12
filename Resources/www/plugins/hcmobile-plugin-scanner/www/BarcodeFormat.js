cordova.define("hcmobile-plugin-scanner.Scanner", function(require, exports, module) {
module.exports = {
	BarcodeFormat:{

	    /**----条形码-----*/
        CODE_128: "CODE_128",/**最常用的条形码，表示高密度数据，字符串可变长，符号内含校验码，可用128个字符，用于工业、仓库和零售批发*/

        CODABAR: "CODABAR",//库德巴码，可表示数字0-9，字符$、+、-、还有只能用作起始/终止符的a,b,c,d四个字符，可变长度，没有校验位，应用于物料管理、图书馆、血站和当前的机场包括发送中。
        CODE_39: "CODE_39",//编制简单、能够对任意长度的数据进行编码，支持设备广泛
//        CODE_93: "CODE_93" ,//CODE39d的改进版本
        /**复合条码，主流应用是UCC.EAN复合条码，主要满足如医药行业等需要同时包含产品标识及附加信息（如批次号、有效期）的应用场合*/
        EAN_8: "EAN_8",//八位
        EAN_13: "EAN_13",

        ITF: "ITF",//主要应用于运输包装，是印刷条件较差，不允许印刷EAN-13和UPC-A条码时应选用的一种条码
        /**RSS系列条码是一维码和二维码的组合码*/
//        RSS_14: "RSS_14",
//        RSS_EXPANDED: "RSS_EXPANDED",

        /**统一产品代码，只能表示数字，主要用于美国和加拿大地区，用于工业、医药、仓库等部门*/
        UPC_A: "UPC_A",
//        UPC_E: "UPC_E",
//        UPC_EAN_EXTENSION: "UPC_EAN_EXTENSION",

        /**-----二维码-----*/
        QR_CODE: "QR_CODE",/**最常用的二维码，QR码，呈正方形，常见的黑白两色。*/
//        DATA_MATRIX: "DATA_MATRIX",//主要用于电子行业小零件的标识，如英特尔的奔腾处理器
//        MAXICODE: "MAXICODE",//由美国联合包裹服务（UPS）公司研制，用于包裹的分拣和跟踪
        AZTEC: "AZTEC",//由美国韦林公司推出，最多可容纳3832个数字或3067个字母字符或1914个字节的数据
//        PDF_417: "PDF_417"//多行组成的条形码，应用于医院、驾驶证、物料管理、货物运输。它的字符集包括所有128个字符，最大数据含量为1850个字符。

	}
};

});
