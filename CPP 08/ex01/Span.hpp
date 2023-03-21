#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

class	Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& span);
		Span& operator=(const Span& span);
		~Span();

		void				addNumber(int nbr);
		unsigned int		shortestSpan() const;
		unsigned int		longestSpan() const;
		void				fillSpan(int nbr);
	private:
		unsigned int		_N;
		std::vector<int>	_vec;
};
