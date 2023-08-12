#include <HelloWorld.hpp>

//using namespace std;

const std::string str_helloWorld = "Hello World from me !! - Variable String";
const char sz_char_helloWorld[] = "Hello World from me !! - Char Array String";

int main(){        
    std::cout << "Hello World from me !! - Inline String" << std::endl;
    std::cout << str_helloWorld << std::endl;
    std::cout << Get_strHelloWorld() << std::endl; //Call from header
    return 0;
}