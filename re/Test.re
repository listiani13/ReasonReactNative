/* open BsReactNative;

let reasonText = ReasonReact.statelessComponent("ReasonText");

let make = _self => {
    ...reasonText, /* spread the template's other defaults into here  */
    render: _self => <Text value="I am made of reason"/>
  }; */

  open BsReactNative;

  let component = ReasonReact.statelessComponent("Test");

  let toStr = ReasonReact.stringToElement;

  let make = _children => {
    ...component,
    render: _self => <Text value="test" />,
  };