#pragma once

#include <iostream>
#include <iterator>
#include <vector>

template <typename T>
typename T::iterator	easyfind(T data, int to_find)
{
	typename T::iterator iter;
	iter = find(begin(data), end(data), to_find);
	if(iter != end(data))
		return (iter);
	throw std::runtime_error("No occurance is found !!");
}
