#ifdef HELLOWORLD_HPP
#define HELLOWORLD_HPP
#else

#include <stdio.h>
#include <iostream>
#include <string>

class HelloWorld {
public:
    void Call_HelloWorld() { std::cout << "Hello World !! - Function Run" << std::endl; } 
    std::string Get_strHelloWorld() { return "Hello World from me !! - Function String"; }
    std::string Get_strHelloWorld02() { return str_helloWorld02; }
private:
    std::string str_helloWorld02 = "Hello World";
};

#endif HELLOWORLD_HPP