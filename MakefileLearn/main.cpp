//--- main.cpp ---
//main.cpp
# include<iostream>
# include "functions.h"

int main(){
    print_hello();
    std::cout << "this is main" << std::endl;
    std::cout << "this is change" << std::endl;
    std::cout << "The factorial of 5 is " << factorial(5) << std::endl;
    return 0;
}
