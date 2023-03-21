#pragma once

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		std::iterator<T>&	begin();
		std::iterator<T>&	end();
	private :
		std::iterator<T>	_iter;
};
