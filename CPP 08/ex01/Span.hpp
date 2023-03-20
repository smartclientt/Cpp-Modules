#pragma once

#include <iostream>
#include <vector>

class	Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& span);
		Span& operator=(const Span& span);
		~Span();


		void	addNumber();
	private:
		unsigned int	_N;
}