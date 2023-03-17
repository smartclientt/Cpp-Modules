#include "Base.hpp"

int main()
{
	Base	*base =  generate();
	Base	&ref = *base;
	identify(ref);
	std::cout << "-------------------" << std::endl;
	Base	*test =  new Base();
	Base	&ref_ = *test;
	identify(ref_);
	return 0;
}
