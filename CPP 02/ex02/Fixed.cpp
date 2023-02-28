#include "Fixed.hpp"

const int Fixed::_nbr_fract_bit = 8;

// Overloading Member functions
Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	else
		return (fixed2);
}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	else
		return (fixed2);
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	else
		return (fixed2);
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	else
		return (fixed2);
}

// Overloading Comparison Operations
bool Fixed::operator== (const Fixed& fixed) const
{
	return (_fixed_value == fixed._fixed_value);
}

bool Fixed::operator!= (const Fixed& fixed) const
{
	return (_fixed_value != fixed._fixed_value);
}

bool Fixed::operator< (const Fixed& fixed) const
{
	return (_fixed_value < fixed._fixed_value);
}

bool Fixed::operator<= (const Fixed& fixed) const
{
	return (_fixed_value <= fixed._fixed_value);
}

bool Fixed::operator> (const Fixed& fixed) const
{
	return (_fixed_value > fixed._fixed_value);
}

bool Fixed::operator>= (const Fixed& fixed) const
{
	return (_fixed_value >= fixed._fixed_value);
}

// Overloading Incriment and Decrement
Fixed Fixed::operator++()
{
	++this->_fixed_value;
	return (*this);
}

Fixed Fixed::operator--()
{
	--this->_fixed_value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed befor_inc = *this;
	++(*this);
	return (befor_inc);	
}

Fixed Fixed::operator--(int)
{
	Fixed befor_dec = *this;
	--(*this);
	return (befor_dec);
}


// Overloading Arithmetic operations
Fixed const Fixed::operator+(const Fixed& fixed) const
{
	Fixed f;
	f._fixed_value = this->_fixed_value + fixed._fixed_value;
	return f;
}

Fixed const Fixed::operator-(const Fixed& fixed) const
{
	Fixed f;
	f._fixed_value = this->_fixed_value - fixed._fixed_value;
	return f;
}

Fixed const Fixed::operator*(const Fixed& fixed) const
{
	Fixed f;
	f._fixed_value = this->_fixed_value * fixed._fixed_value / (1 << _nbr_fract_bit);
	return f;
}

Fixed const Fixed::operator/(const Fixed& fixed) const
{
	Fixed f;
	f._fixed_value = (this->_fixed_value * (1 << _nbr_fract_bit) / fixed._fixed_value);
	return f;
}



// member functions
float	Fixed::toFloat(void) const
{
	return (getRawBits() / (float)(1 << _nbr_fract_bit));
}

int		Fixed::toInt(void) const
{
	return (getRawBits() / (1 << _nbr_fract_bit));
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
}

Fixed::Fixed(const int fixed_value)
{
	_fixed_value = fixed_value * (1 << _nbr_fract_bit);
}

Fixed::Fixed(const float float_value)
{
	_fixed_value = roundf(float_value * (1 << _nbr_fract_bit));
}

Fixed::Fixed(const Fixed& fixed)
{
	*this = fixed;
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
	_fixed_value = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
}


// overloading << operator function
std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
