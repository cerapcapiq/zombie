#include <iostream>

int main(void)
{
    std::string  string = "HI THIS IS BRAIN";

    std::string *stringPTR = &string; 
	std::string &stringREF = string;

    //memory address of string 
    std::cout << &string << std::endl;
    std::cout << &stringREF << std::endl; 
    std::cout << &*stringPTR << std::endl; //same
    std::cout << stringPTR << std::endl;

    std::cout<< std::endl;

    //value inside string
    std::cout << string << std::endl; //same
    std::cout << *stringPTR << std::endl; //same
    std::cout << *&stringREF << std::endl; //same
    std::cout << stringREF << std::endl;

    std::cout<< std::endl;

    string = "IM NOT BRAIN, IM A STRING";

    //memory address of string 
    std::cout << &string << std::endl;
    std::cout << &stringREF << std::endl; 
    std::cout << &*stringPTR << std::endl; //same
    std::cout << stringPTR << std::endl;

    std::cout<< std::endl;

    //value inside string
    std::cout << string << std::endl; //same
    std::cout << *stringPTR << std::endl; //same
    std::cout << *&stringREF << std::endl; //same
    std::cout << stringREF << std::endl;
}