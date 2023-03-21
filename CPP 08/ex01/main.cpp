#include "Span.hpp"

// int main( void )
// {
// 	Span	span(10);

// 	try
// 	{
// 		srand(time(NULL));
// 		for(int i = 0; i < 10; i++)
// 			span.addNumber(rand());
// 	}
// 	catch (std::exception& exp)
// 	{
// 		std::cerr << exp.what() << std::endl;
// 	}
// 	span.shortestSpan();
// 	span.longestSpan();
// 	return 0;
// }


int main()
{
	Span span = Span(100000);
	try
	{
		span.fillSpan(100000);
	}
	catch (std::exception& exp)
	{
		std::cerr << exp.what() << std::endl;
	}
	try
	{
		std::cout << span.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}