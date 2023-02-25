#include "Fixed.hpp"

const int Fixed::_nbr_fract_bit = 8;

// member functions
float	Fixed::toFloat(void) const
{
	return (getRawBits() / roundf(pow(2, _nbr_fract_bit)));
}

int		Fixed::toInt(void) const
{
	return (getRawBits() / roundf(pow(2, _nbr_fract_bit)));
}

// getters
int Fixed::getRawBits(void) const
{
	return (_fixed_value);
}

// setters
void Fixed::setRawBits(int const raw)
{
	_fixed_value = raw;
}

//constructor

Fixed::Fixed(): _fixed_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fixed_value)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_value = roundf(fixed_value * pow(2, _nbr_fract_bit));
}

Fixed::Fixed(const float float_value)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_value = roundf(float_value * pow(2, _nbr_fract_bit));
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixed_value = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


// overloading << operator function
std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
