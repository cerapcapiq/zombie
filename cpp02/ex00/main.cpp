#include <iostream>

using namespace std;





Fixed::Fixed()
{
    std::cout << "default constructor is called" << std::endl;
}

Fixed::Fixed(const Fixed&pf)
{
    
    std::cout << "copy constructor is called" << std::endl;
}


int main()
{
   Fixed a;
   Fixed b(a);
   Fixed c;

   c = b;

std::cout << a.getRawBits() << std::endl; 
std::cout << b.getRawBits() << std::endl; 
std::cout << c.getRawBits() << std::endl;
return 0;
}