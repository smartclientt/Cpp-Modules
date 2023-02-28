#ifndef __FIXED__
#define __FIXED__

#include <iostream>

class	Fixed
{
	public :
		Fixed();
		Fixed(const Fixed& fixed);
		Fixed& operator= (const Fixed& fixed);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private :
		int					_fixed_value;
	    static const int	_nbr_fract_bit;
};

#endif