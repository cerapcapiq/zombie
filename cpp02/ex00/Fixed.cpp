#include "Fixed.hpp"


Fixed::Fixed()
{
    
}

Fixed::~Fixed()
{
    std::cout << "Bye!" << std::endl;
}


int Fixed::getRawBits(void) const
{
    return (this->fp);
    std::cout << "getRawBits member function called" << std::endl;
}

void Fixed::setRawBits(int const raw )
{
    raw->fp;
}
