#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
    private :
    int fp;
    static const int fb 8;

    Public :
    Fixed();
    ~Fixed();
    Fixed(const Fixed& pf)
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif

