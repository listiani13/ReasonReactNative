// Generated by BUCKLESCRIPT VERSION 2.2.3, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var Text$BsReactNative = require("bs-react-native/lib/js/src/components/text.js");

var component = ReasonReact.statelessComponent("Test");

function toStr(prim) {
  return prim;
}

function make() {
  var newrecord = component.slice();
  newrecord[/* render */9] = (function () {
      return ReasonReact.element(/* None */0, /* None */0, Text$BsReactNative.make(/* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* Some */["test"], /* array */[]));
    });
  return newrecord;
}

exports.component = component;
exports.toStr = toStr;
exports.make = make;
/* component Not a pure module */