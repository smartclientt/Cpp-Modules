#include "iter.hpp"

int main()
{
    int arr[] = {1, 6, 0, 3};
    iter(arr, 4, my_func<int>);
    return 0;
}
