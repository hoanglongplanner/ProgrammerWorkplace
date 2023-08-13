#ifdef VARIABLE_HPP
#define VARIABLE_HPP
#else

#include <stdio.h>
#include <iostream>
#include <string>

//using namespace std;

class Variable {
private:
    int i32_int = 1;
    float f_float = 3.14f;
    double d_double = 6.28f;
    long l_long = 1.0f;
    long double ld_longDouble = 1.0f;
    bool isBoolean = false;
    char char_char = 'a';
    std::string str_string = "Example String";
    
    int sz_i32_int[16];    
    float sz_f_float[16];
    double sz_d_double[16];
    bool sz_isBoolean[16]; 

public:
    void Do_HelloWorld() { std::cout << "Hello World !! - Function Run" << std::endl; }
    int Get_Int() { return i32_int; }
    float Get_Float() { return f_float; }
    double Get_Double() { return d_double; }
    bool IsBoolean() { return isBoolean; }
    std::string Get_String() { return str_string; }

    //int Get_szInt() { return sz_i32_int; } //error
};

#endif VARIABLE_HPP