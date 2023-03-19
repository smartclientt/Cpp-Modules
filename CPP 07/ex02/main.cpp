#include "Array.hpp"

void    f()
{
    Array<int>      A(1);
    Array<int>      B(A);
    Array<int>      C(5);
    C = A;

    if (A.get_content() == NULL)
        std::cerr << "waaaa7ebi ache kadir" << std::endl;
    if (B.get_content() == NULL)
        std::cerr << "waaaa7ebi ache kadir" << std::endl;
    if (C.get_content() == NULL)
        std::cerr << "waaaa7ebi ache kadir" << std::endl;

    std::cout << A.get_lenght() << std::endl;
    std::cout << B.get_lenght() << std::endl;
    std::cout << C.get_lenght() << std::endl;
    int *arr1 = A.get_content(); 
    for(int i = 0; i < A.get_lenght(); i++)
        std::cout << arr1[i];
    std::cout << " || ";
    int *arr2 = B.get_content();
    for(int i = 0; i < A.get_lenght(); i++)
        std::cout << arr2[i];
    std::cout << " || ";
    int *arr3 = C.get_content();
    for(int i = 0; i < C.get_lenght(); i++)
        std::cout << arr3[i];
    std::cout << std::endl;
    try
    {
        std::cout << "content[] = " << C[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    f();
    // system("leaks ex02");
    return 0;
}
