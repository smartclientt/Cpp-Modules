#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe &pmerge) : _vector_data(pmerge._vector_data), _deque_data(pmerge._deque_data) {
}

PmergeMe &PmergeMe::operator=(const PmergeMe &pmerge){
	_vector_data = pmerge._vector_data;
	_deque_data = pmerge._deque_data;
	return (*this);
}

PmergeMe::~PmergeMe() {
}