#ifndef __FIXED__
#define __FIXED__

#include <iostream>
#include <cmath>

class	Fixed
{
	public :
		Fixed();
		Fixed(const int fixed_value);
		Fixed(const float float_value);
		Fixed(const Fixed& fixed);
		Fixed& operator= (const Fixed& fixed);
		~Fixed();

		float	toFloat(void) const;
		int		toInt(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private :
		int					_fixed_value;
	    static const int	_nbr_fract_bit;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif