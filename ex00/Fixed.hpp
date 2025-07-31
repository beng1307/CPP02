#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
	private:

		int					fixed_point_number;
		static const int	n_of_fractional_bits = 8; 

	public:

		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif