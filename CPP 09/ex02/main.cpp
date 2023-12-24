#include "PmergeMe.hpp"
#include <string>


int main(int ac, char **av)
{
	PmergeMe pmerge;

	try {
		std::cout << "---------------------" << std::endl;
		// time of execution
		
		pmerge.fillVec(ac, av);
		clock_t start_vec = clock();
		pmerge.swapPairsVec();
		pmerge.getChainsVec();
		pmerge.mergeSortVec(pmerge._mainChainVec);
		pmerge.chainMatchingVec();
		pmerge.calculJacobVec();
		pmerge.insertVec();

		clock_t end_vec = clock();
		double time_vec = double(end_vec - start_vec) / CLOCKS_PER_SEC;


		std::cout << "---------------------" << std::endl;
		pmerge.fillDeque(ac, av);
		clock_t start_deque = clock();
		pmerge.swapPairsDeque();
		pmerge.getChainsDeque();
		pmerge.mergeSortDeque(pmerge._mainChainDeque);
		pmerge.chainMatchingDeque();
		pmerge.calculJacobDeque();
		pmerge.insertDeque();
		clock_t end_deque = clock();
		double time_deque = double(end_deque - start_deque) / CLOCKS_PER_SEC;
 
		std::cout << "---------------------" << std::endl;
		pmerge.printBeforContainer();
		pmerge.printAfterContainer();

 		// std::cout << std::boolalpha << std::is_sorted(pmerge._mainChainDeque.begin(), pmerge._mainChainDeque.end()) << std::endl;
 		// std::cout << std::boolalpha << std::is_sorted(pmerge._mainChainVec.begin(), pmerge._mainChainVec.end()) << std::endl;

		// print time of execution
		std::cout << "---------------------" << std::endl;
		std::cout << "Time of execution vector : " << time_vec << std::endl;
		std::cout << "Time of execution deque : " << time_deque << std::endl;

	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
		return 1;
	}
	return 0;
}