#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <stdexcept>
#include <stdlib.h>
#include <algorithm>

class PmergeMe
{
	public :
		PmergeMe();
		PmergeMe(const PmergeMe& pmerge);
		PmergeMe& operator=(const PmergeMe& pmerge);
		~PmergeMe();

		void fillVec(int ac, char **av);
		void fillDeque(int ac, char **av);

		void printContainer() const;
		void printContainerChain() const ;

		void swapPairsVec();
		void swapPairsDeque();
		void getChainsVec();
		void getChainsDeque();

		void mergeSortVec(int p, int r);
		void mergeSortDeque(int p, int r);

		void mergeVec(std::vector<unsigned int> &arr, int p, int q, int r);
		void mergeDeque(std::deque<unsigned int> &arr, int p, int q, int r);

		void chainMatchingVec();
		void chainMatchingDeque();

		void calculJacobVec();
		void calculJacobDeque();

		void insertVec();
		void insertDeque();
	public :
		std::vector<unsigned int>		_vector_data;
		std::deque<unsigned int>		_deque_data;
		std::vector<unsigned int>		_mainChainVec;
		std::vector<unsigned int>		_pendChainVec;
		std::deque<unsigned int>		_mainChainDeque;
		std::deque<unsigned int>		_pendChainDeque;
		std::deque<unsigned int>		_jacobVec;
		std::deque<unsigned int>		_jacobDeque;

};
