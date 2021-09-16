!function(e, t) {
    if ("object" == typeof exports && "object" == typeof module) module.exports = t(); else if ("function" == typeof define && define.amd) define([], t); else {
        var o = t();
        for (var n in o) ("object" == typeof exports ? exports : e)[n] = o[n];
    }
}(this, function() {
    return function(e) {
        function t(n) {
            if (o[n]) return o[n].exports;
            var r = o[n] = {
                exports: {},
                id: n,
                loaded: !1
            };
            return e[n].call(r.exports, r, r.exports, t), r.loaded = !0, r.exports;
        }
        var o = {};
        return t.m = e, t.c = o, t.p = "", t(0);
    }([ function(e, t) {
        "use strict";
        function o(e) {
            var t = e.panel;
            t.show(), t.callback(null);
        }
        Object.defineProperty(t, "__esModule", {
            value: !0
        }), t.sync = o;
    } ]);
});