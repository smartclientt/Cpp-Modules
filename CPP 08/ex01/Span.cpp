#include "Span.hpp"

Span::Span(): _N(0)
{}
Span::Span(unsigned int n): _N(n)
{}
Span::Span(const Span& span): _N(span._N), _vec(span._vec)
{}
Span& Span::operator=(const Span& span)
{
	_N = span._N;
	_vec = span._vec;
	return (*this);
}
Span::~Span()
{}

void	Span::addNumber(int nbr)
{

	if (_N == 0)
		throw	std::runtime_error("Span size is Zero, You can't use It");
	if (_vec.size() == _N)
		throw	std::runtime_error("Span is full, You can't add more element");
	_vec.push_back(nbr);
}

unsigned int		Span::shortestSpan() const
{
	if (_vec.size() <= 1)
		throw std::runtime_error("Exception : Can't make this operation for a (empty | solo) Span !!");
	std::vector<long> copy_vec(_vec.size());
	std::copy(_vec.begin(), _vec.end(), copy_vec.begin());
	std::sort(begin(copy_vec), end(copy_vec));
	std::adjacent_difference(copy_vec.begin(), copy_vec.end(), copy_vec.begin());
	copy_vec[0] = UINT_MAX;
	return (*(std::min_element(copy_vec.begin(), copy_vec.end())));
}

unsigned int		Span::longestSpan() const
{
	if (_vec.size() <= 1)
		throw std::runtime_error("Exception : Can't sort a (empty | solo) Span !!");
	return (*(std::max_element(_vec.begin(), _vec.end())) - *(std::min_element(_vec.begin(), _vec.end())));
}

void				Span::fillSpan(int nbr)
{
	srand(time(NULL));
	for(int i = 0; i < nbr; i++)
		addNumber(rand());
}
