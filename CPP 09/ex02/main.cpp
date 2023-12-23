#include "PmergeMe.hpp"
#include <string>


int main(int ac, char **av)
{
	PmergeMe pmerge;

	try {
		std::cout << "---------------------" << std::endl;
		pmerge.fillVec(ac, av);
		pmerge.fillDeque(ac, av);
		pmerge.swapPairsVec();
		pmerge.swapPairsDeque();
		pmerge.getChainsVec();
		pmerge.getChainsDeque();
		// pmerge.printContainerChain();
		std::cout << "---------------------" << std::endl;
		// pmerge.printContainerChain();

		pmerge.mergeSortVec(0, pmerge._mainChainVec.size() - 1);
		pmerge.mergeSortDeque(0, pmerge._mainChainDeque.size() - 1);

		// pmerge.printContainerChain();
		// std::cout << "---------------------" << std::endl;
		pmerge.chainMatchingVec();
		pmerge.chainMatchingDeque();

		// pmerge.printContainerChain();
		// std::cout << "---------------------" << std::endl;

		pmerge.calculJacobVec();
		pmerge.calculJacobDeque();

		pmerge.insertVec();
		pmerge.insertDeque();
		// pmerge.printContainerChain();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
		return 1;
	}
	return 0;
}