#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:

		int					fixed_point_number;
		static const int	n_of_fractional_bits = 8;

	public:

		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		~Fixed();

		int					getRawBits(void) const;
		void				setRawBits(int const raw);

		float				toFloat(void) const;
		int					toInt(void) const;

		bool				operator>(const Fixed &fixed) const;
		bool				operator<(const Fixed &fixed) const;
		bool				operator>=(const Fixed &fixed) const;
		bool				operator<=(const Fixed &fixed) const;
		bool				operator==(const Fixed &fixed) const;
		bool				operator!=(const Fixed &fixed) const;

		Fixed				operator+(const Fixed &fixed) const;
		Fixed				operator-(const Fixed &fixed) const;
		Fixed				operator*(const Fixed &fixed) const;
		Fixed				operator/(const Fixed &fixed) const;

		Fixed				operator++(int);
		Fixed				&operator++();
		Fixed				operator--(int);
		Fixed				&operator--();

		static Fixed		&min(Fixed &number_1, Fixed &number_2);
		static const Fixed	&min(const Fixed &number_1, const Fixed &number_2);
		static Fixed		&max(Fixed &number_1, Fixed &number_2);
		static const Fixed	&max(const Fixed &number_1, const Fixed &number_2);
};
std::ostream &operator<<(std::ostream &output, const Fixed &to_copy);
	
#endif
