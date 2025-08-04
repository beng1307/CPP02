#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_number = 0;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point_number = number << n_of_fractional_bits;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point_number = roundf(number * (1 << n_of_fractional_bits));
}

Fixed::Fixed(const Fixed &to_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	fixed_point_number = to_copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &to_copy)
{
	if (this != &to_copy)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		fixed_point_number = to_copy.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (fixed_point_number);
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point_number = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)fixed_point_number / (1 << n_of_fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (fixed_point_number >> n_of_fractional_bits);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &to_copy)
{
	return (output << to_copy.toFloat());
}