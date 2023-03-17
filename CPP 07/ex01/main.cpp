#include "iter.hpp"

template <typename T, typename U, typename V>
void iter(T* array, U array_size, V func)
{
    std::cout << "this is our multi type function" << std::endl;
    for (U i = 0; i < array_size; i++)
        func(array[i]);
}

template <typename T>
void my_func(T var)
{
    std::cout << "iteration: " << var << std::endl;
}

int main()
{
    char arr[] = "saad";
    iter(arr, sizeof(arr), my_func<char>);
    return 0;
}
