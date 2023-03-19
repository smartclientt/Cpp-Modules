#pragma once

#include <iostream>

template <typename T, typename U, typename V>
void iter(T* array, U array_size, V func)
{
    std::cout << "This is our multi_type function" << std::endl;
    if (array_size < 0 && array == NULL)
        return ;
    for (U i = 0; i < array_size; i++)
        func(array[i]);
}

template <typename T>
void my_func(const T& var)
{
    std::cout << "iteration: " << var << std::endl;
}
