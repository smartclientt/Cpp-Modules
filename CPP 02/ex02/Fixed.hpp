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

		static Fixed& min(Fixed& fixed1, Fixed& fixed2);
		static Fixed& max(Fixed& fixed1, Fixed& fixed2);
		static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
		static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);

		bool operator==(const Fixed& fixed) const;
		bool operator!=(const Fixed& fixed) const;
		bool operator<(const Fixed& fixed) const;
		bool operator<=(const Fixed& fixed) const;
		bool operator>(const Fixed& fixed) const;
		bool operator>=(const Fixed& fixed) const;

		Fixed operator++();
		Fixed operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		const Fixed operator+(const Fixed& fixed) const;
		const Fixed operator-(const Fixed& fixed) const;
		const Fixed operator*(const Fixed& fixed) const;
		const Fixed operator/(const Fixed& fixed) const;

	private :
		int					_fixed_value;
	    static const int	_nbr_fract_bit;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif