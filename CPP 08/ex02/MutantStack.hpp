#pragma once

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T, typename C_T = std::deque<T> >
class MutantStack : public std::stack<T, C_T>
{
	public:
		// typedef 
		typedef typename C_T::iterator	iterator;
		typedef typename C_T::reverse_iterator	reverse_iterator;
		
		MutantStack()
		{}
		MutantStack(const MutantStack& m_stack)
		{
			*this = m_stack;
		}
		MutantStack& operator=(const MutantStack& m_stack)
		{
			this->c = m_stack.c;
			return (*this);
		}
		~MutantStack()
		{}

		iterator	begin()
		{
			return (this->c.begin());
		}
		iterator	end()
		{
			return (this->c.end());
		}
		reverse_iterator	rbegin()
		{
			return (this->c.rbegin());
		}
		reverse_iterator	rend()
		{
			return (this->c.rend());
		}
};
