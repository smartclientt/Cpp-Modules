#pragma once

#include <iostream>
#include <deque>
#include <vector>

class PmergeMe
{
	public :
		PmergeMe();
		PmergeMe(const PmergeMe& pmerge);
		PmergeMe& operator=(const PmergeMe& pmerge);
		~PmergeMe();

		
	private :
		std::deque<int>		_deque_data;
		std::vector<int>	_vector_data;
		static int			k;
};
