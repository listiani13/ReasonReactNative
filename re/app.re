/* open BsReactNative;

let app = () =>
  <View style=Style.(style([flex(1.), justifyContent(Center), alignItems(Center)]))>
    <ReasonText/>
    <TouchableOpacity
    onPress=(() =>
      Js.log("hello")
    )>
      <Text value="Click me!"/>
    </TouchableOpacity>
    /* <Text value="Reason is awesome!" /> */
  </View>; */
  open BsReactNative;

let app = () =>
  <View
    style=Style.(
            style([flex(1.), justifyContent(Center), alignItems(Center)])
          )>
    <Test />
  </View>;