#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe &pmerge) : _vector_data(pmerge._vector_data), _deque_data(pmerge._deque_data) {
}

PmergeMe &PmergeMe::operator=(const PmergeMe &pmerge){
	_vector_data = pmerge._vector_data;
	_deque_data = pmerge._deque_data;
	return (*this);
}

PmergeMe::~PmergeMe() {
}

void PmergeMe::fillVec(int ac, char **av) {
	if (ac == 1)
		throw std::runtime_error("No arguments provided");
	if (ac == 2)
		throw std::runtime_error("You Privide just one argument");
	//check if the arguments are unsigned int
	for (int i = 1; i < ac; i++) {
		std::string str(av[i]);
		for (size_t j = 0; j < str.size(); j++) {
			if (!isdigit(str[j]))
				throw std::runtime_error("Arguments must be unsigned int");
		}
		if (atof(str.c_str()) > UINT_MAX)
			throw std::runtime_error("Arguments must be in the range of unsigned int");
		if (std::find(_vector_data.begin(), _vector_data.end(), atof(str.c_str())) != _vector_data.end())
			throw std::runtime_error("Arguments must be unique");
		_vector_data.push_back(atof(str.c_str()));
	}
}
void PmergeMe::fillDeque(int ac, char **av) {
	if (ac == 1)
		throw std::runtime_error("No arguments provided");
	if (ac == 2)
		throw std::runtime_error("You Privide just one argument");
	//check if the arguments are unsigned int
	for (int i = 1; i < ac; i++) {
		std::string str(av[i]);
		for (size_t j = 0; j < str.size(); j++) {
			if (!isdigit(str[j]))
				throw std::runtime_error("Arguments must be unsigned int");
		}
		if (atof(str.c_str()) > UINT_MAX)
			throw std::runtime_error("Arguments must be in the range of unsigned int");
		if (std::find(_deque_data.begin(), _deque_data.end(), atof(str.c_str())) != _deque_data.end())
			throw std::runtime_error("Arguments must be unique");
		_deque_data.push_back(atof(str.c_str()));
	}
}

void PmergeMe::printContainer() const{
	std::cout << "Vector: ";
	for (size_t i = 0; i < _vector_data.size(); i++)
		std::cout << _vector_data[i] << " ";
	std::cout << std::endl;
	std::cout << "Deque: ";
	for (size_t i = 0; i < _deque_data.size(); i++)
		std::cout << _deque_data[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::printContainerChain() const {
	std::cout << "Main Vector: ";
	for (size_t i = 0; i < _mainChainVec.size(); i++)
		std::cout << _mainChainVec[i] << " ";
	std::cout << std::endl;
	std::cout << "Pend Vector: ";
	for (size_t i = 0; i < _pendChainVec.size(); i++)
		std::cout << _pendChainVec[i] << " ";
	std::cout << std::endl;
	std::cout << "Mian Deque: ";
	for (size_t i = 0; i < _mainChainDeque.size(); i++)
		std::cout << _mainChainDeque[i] << " ";
	std::cout << std::endl;
	std::cout << "Pend Deque: ";
	for (size_t i = 0; i < _pendChainDeque.size(); i++)
		std::cout << _pendChainDeque[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::swapPairsVec()
{
    for (size_t i = 0; i < _vector_data.size(); i += 2 ) { 
        if (_vector_data[i] < _vector_data[i+1]) {
            std::swap(_vector_data[i], _vector_data[i+1]);   
		}
    }
}

void PmergeMe::swapPairsDeque()
{
    for (size_t i = 0; i < _deque_data.size(); i += 2 ) { 
        if (_deque_data[i] < _deque_data[i+1]) {
			std::swap(_deque_data[i], _deque_data[i+1]);
		}
    }
}

void PmergeMe::getChainsVec()
{
	for (size_t i = 0; i < _vector_data.size(); i++ ) { 
		if (i == _vector_data.size() - 1) {
			_pendChainVec.push_back(_vector_data[i]);
            break;
        }
        if (i % 2 == 0)
			_mainChainVec.push_back(_vector_data[i]);
        else
			_pendChainVec.push_back(_vector_data[i]);
	}
}

void PmergeMe::getChainsDeque()
{
	for (size_t i = 0; i < _deque_data.size(); i++ ) { 
		if (i == _deque_data.size() - 1) {
			_pendChainDeque.push_back(_deque_data[i]);
            break;
        }
        if (i % 2 == 0)
			_mainChainDeque.push_back(_deque_data[i]);
        else
			_pendChainDeque.push_back(_deque_data[i]);
	}
}

void PmergeMe::mergeVec(std::vector<unsigned int> &chain, int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;

	std::vector<size_t> L(n1), R(n2);

	for (int i = 0; i < n1; i++)
		L[i] = chain[p + i];
	for (int j = 0; j < n2; j++)
		R[j] = chain[q + 1 + j];

	int i, j, k;
	i = 0;
	j = 0;
	k = p;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) 
			chain[k] = L[i++];
		else
			chain[k] = R[j++];
		k++;
	}
	while (i < n1) {
		chain[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		chain[k] = R[j];
		j++;
		k++;
	}
}
void PmergeMe::mergeDeque(std::deque<unsigned int> &chain, int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;

	std::vector<size_t> L(n1), R(n2);

	for (int i = 0; i < n1; i++)
		L[i] = chain[p + i];
	for (int j = 0; j < n2; j++)
		R[j] = chain[q + 1 + j];

	int i, j, k;
	i = 0;
	j = 0;
	k = p;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) 
			chain[k] = L[i++];
		else
			chain[k] = R[j++];
		k++;
	}
	while (i < n1) 
		chain[k++] = L[i++];
	while (j < n2)
		chain[k++] = R[j++];
}

void PmergeMe::mergeSortVec(int p, int r)
{
	if (p < r) {
		int q = (p + r) / 2;
		mergeSortVec(p, q);
		mergeSortVec(q + 1, r);
		mergeVec(_mainChainVec, p, q, r);
	}
}

void PmergeMe::mergeSortDeque(int p, int r)
{
	if (p < r) {
		int q = (p + r) / 2;
		mergeSortDeque(p, q);
		mergeSortDeque(q + 1, r);
		mergeDeque(_mainChainDeque ,p, q, r);
	}
	
}


void PmergeMe::chainMatchingVec()
{
    for (size_t i = 1; i < _vector_data.size(); i+=2)
    {
        std::vector<unsigned int>::iterator newIndex = std::find(_mainChainVec.begin(), _mainChainVec.end(), _vector_data[i - 1]);
        if (newIndex != _mainChainVec.end())
        {
            unsigned int t = newIndex - _mainChainVec.begin();
            _pendChainVec[t] = _vector_data[i];
        }
    }
}

void PmergeMe::chainMatchingDeque()
{
    for (size_t i = 1; i < _deque_data.size(); i+=2)
    {
        std::deque<unsigned int>::iterator newIndex = std::find(_mainChainDeque.begin(), _mainChainDeque.end(), _deque_data[i - 1]);
        if (newIndex != _mainChainDeque.end())
        {
            unsigned int t = newIndex - _mainChainDeque.begin();
            _pendChainDeque[t] = _deque_data[i];
        }
    }
}

void PmergeMe::calculJacobVec() {
	size_t prev = 1;
    size_t pre_prev = 0;
    size_t current;

    for (size_t i = 2; i < _pendChainVec.size(); i++)
    {
        current = prev + 2 * pre_prev;
        if (current <= _pendChainVec.size())
            _jacobVec.push_back(current);
        size_t tmp = current;
        while (tmp - prev > 1)
        {
            tmp--;
            if (tmp <= _pendChainVec.size())
                _jacobVec.push_back(tmp);
        }
        pre_prev = prev;
        prev = current;
    }
}

void PmergeMe::calculJacobDeque() {
	size_t prev = 1;
    size_t pre_prev = 0;
    size_t current;

    for (size_t i = 2; i < _pendChainDeque.size(); i++)
    {
        current = prev + 2 * pre_prev;
        if (current <= _pendChainDeque.size())
            _jacobDeque.push_back(current);
        size_t tmp = current;
        while (tmp - prev > 1)
        {
            tmp--;
            if (tmp <= _pendChainDeque.size())
                _jacobDeque.push_back(tmp);
        }
        pre_prev = prev;
        prev = current;
    }
}

void PmergeMe::insertVec() {
	_mainChainVec.insert(_mainChainVec.begin(), _pendChainVec[0]);
	std::cout << "jacobVec size: " << _jacobVec.size() << std::endl;
	for (size_t i = 1; i < _jacobVec.size(); i++)
	{
		if (_jacobVec[i] - 1 == _pendChainVec.size())
			break;
		std::cout << _jacobVec[i];
		std::vector<unsigned int>::iterator index = std::lower_bound(_mainChainVec.begin(), _mainChainVec.end(), _pendChainVec[_jacobVec[i] - 1]);
		_mainChainVec.insert(index, _pendChainVec[_jacobVec[i] - 1]);
	}
	std::cout << std::endl;
}

void PmergeMe::insertDeque() {
	_mainChainDeque.insert(_mainChainDeque.begin(), _pendChainDeque[0]);
	for (size_t i = 1; i < _jacobDeque.size(); i++) {
		if (_jacobDeque[i] - 1 == _pendChainDeque.size())
			break;
		std::deque<unsigned int>::iterator index = std::lower_bound(_mainChainDeque.begin(), _mainChainDeque.end(), _pendChainDeque[_jacobDeque[i] - 1]);
		_mainChainDeque.insert(index, _pendChainDeque[_jacobDeque[i] - 1]);
	}
}

