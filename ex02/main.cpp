#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}

// int main(void)
// {
// 	Fixed a(10);
// 	Fixed b(3);
// 	Fixed c;

// 	if (a > b)
// 		std::cout << true << std::endl;

// 	if (b < a)
// 		std::cout << true << std::endl;

// 	if (a >= b)
// 		std::cout << true << std::endl;
// 	if (a >= a)
// 		std::cout << true << std::endl;

// 	if (b <= a)
// 		std::cout << true << std::endl;
// 	if (b <= b)
// 		std::cout << true << std::endl;

// 	if (a == a)
// 		std::cout << true << std::endl;

// 	if (a != b)
// 		std::cout << true << std::endl;

// 	std::cout << std::endl;

// 	std::cout << (c = a / b) << std::endl;
// 	std::cout << (c = a * b) << std::endl;
// 	std::cout << (c = a + b) << std::endl;
// 	std::cout << (c = a - b) << std::endl;

// 	std::cout << std::endl;

// 	c = 10;

// 	std::cout << c.getRawBits() << std::endl;
// 	++c;
// 	std::cout << c.getRawBits() << std::endl;
// 	c++;

// 	std::cout << c.getRawBits() << std::endl;
// 	--c;
// 	std::cout << c.getRawBits() << std::endl;
// 	c--;
// 	std::cout << c.getRawBits() << std::endl;

// 	std::cout << std::endl;

// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	std::cout << Fixed::min( a, b ) << std::endl;
// 	std::cout << Fixed::max( (const Fixed &)a, (const Fixed &)b ) << std::endl;
// 	std::cout << Fixed::min( (const Fixed &)a, (const Fixed &)b ) << std::endl;

// }