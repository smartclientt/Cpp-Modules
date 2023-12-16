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
		std::vector<int>	_vector_data;
		std::deque<int>		_deque_data;
};
