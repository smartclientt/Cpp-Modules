#include "Serializer.hpp"

int main()
{
	Data	*data1 = (Data *)malloc(sizeof(Data));
	if (!data1)
		return 1;
	std::cout << data1 << std::endl;
	std::cout << &(data1->str) << std::endl;
	std::cout << &(data1->nbr) << std::endl;
	uintptr_t	unit_ptr = Serializer::serialize(data1);
	Data	*data2 = Serializer::deserialize(unit_ptr);
	std::cout << data2 << std::endl;
	free(data1);
	return 0;
}

// int main()
// {
// 	int x;
// 	uintptr_t ptr = reinterpret_cast<uintptr_t>(&x); 
// 	std::cout << &x << std::endl;
// 	std::cout << &x + 1 << std::endl;
// 	std::cout << ptr << std::endl;
// 	std::cout << ptr + 4 << std::endl;
// 	int* ptr2 = reinterpret_cast<int *>(ptr + 4);
// 	std::cout << ptr2 << std::endl;
// 	return 0;
// }


// int main()
// {
// 	// Data 	data;
// 	// data.str = "saad";
// 	// data.nbr = 5;
// 	int		x;
// 	// uintptr_t x1 = reinterpret_cast<uintptr_t>(&x);
// 	// uintptr_t x2 = x1 + 2;
// 	// *reinterpret_cast<short*>(x1) = 1;
// 	// // *reinterpret_cast<short*>(x2) = 1;
// 	// *reinterpret_cast<short*>(x2) = 1;
// 	// std::cout << (&x) << '\n';
// 	// std::cout << (void*)(((uintptr_t*)&x) + 1) << '\n';
// 	// 1 00000001 00000001 00000001
// 	// int*	p1 = reinterpret_cast<int *>(&data);
// 	// Data*	p2 = reinterpret_cast<Data *>(&x);

// 	// std::cout << &x << '\n';
// 	// std::cout << ((char)&x) + 1 << '\n';
//  	// std::cout << *p1 << std::endl;	
// 	// std::cout << &x << std::endl;	
// 	// std::cout << p2 << std::endl;
// 	return 0;
// }
