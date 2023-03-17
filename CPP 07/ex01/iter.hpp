#pragma once

#include <iostream>

template <typename T, typename U, void*>
void	iter(T array, U array_size, void *func());

template <typename T>
void  my_func(T var);