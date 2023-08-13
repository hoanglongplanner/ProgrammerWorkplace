void main() {
  print("Hello World !! - Main");
  print(K_HELLOWORLD);
  print(str_helloWorld);
  Do_HelloWorld();
  Do_HelloWorldInline();
  print(Get_HelloWorld());
}

const String K_HELLOWORLD = "Hello World !! - Const Variable";
String str_helloWorld = "Hello World !! - Variable";
String Get_HelloWorld() {
  return "Hello World !! - Get Function";
}
void Do_HelloWorld() => print("Hello World !! - Function");
void Do_HelloWorldInline({String param_helloWorld = "Hello World !! - Function Param"}) { 
  print(param_helloWorld);
}