/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:19:19 by ullorent          #+#    #+#             */
/*   Updated: 2023/10/04 15:48:22 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* Constructors and destructor */
PmergeMe::PmergeMe(/* args */) {
	// std::cout << "PmergeMe constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe	&ref) {
	*this = ref;
	// std::cout << "PmergeMe COPY constructor called" << std::endl;
}

PmergeMe::~PmergeMe() {
	// std::cout << "PmergeMe constructor called" << std::endl;
}

/* Overload operator */
PmergeMe	&PmergeMe::operator=(const PmergeMe &ref) {
	if (this != &ref)
		*this = ref;
	// std::cout << "PmergeMe (=) operator overload called" << std::endl;
	return (*this);
}

/* Member functions */

/* --- Printers */
void	vectorPrinter(std::vector<int> vct) {
	std::vector<int>::iterator	it;

	for (it = vct.begin(); it != vct.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	dqPrinter(std::deque<int> dq) {
	std::deque<int>::iterator	it;

	for (it = dq.begin(); it != dq.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

/* --- VECTORS --- */
std::vector<int>	PmergeMe::mergeVctr(std::vector<int> left, std::vector<int> right) {
	std::vector<int>	ordered;
	unsigned long int	i = 0;
	unsigned long int	j = 0;

	// Vamos a rellenar con un lado de la lista primero depeniendo de si un número es mas grande que el otro
	while (i < left.size() && j < right.size()) {
		if (left[i] <= right[j]) {
			ordered.push_back(left[i]);
			i++;
		}
		else {
			ordered.push_back(right[j]);
			j++;
		}
	}

	// Ahora, vamos a rellenar el otro lado si la otra lista ya ha sido rellenada
	while (i < left.size()) {
		ordered.push_back(left[i]);
		i++;
	}
	while (j < right.size()) {
		ordered.push_back(right[j]);
		j++;
	}

	return (ordered);
}

std::vector<int>	PmergeMe::mergeInsert(std::vector<int> numbers) {
	if (numbers.size() <= 1)
		return (numbers);
	int	mid = numbers.size() / 2;
	std::vector<int>	left(numbers.begin(), numbers.begin() + mid);
	std::vector<int>	right(numbers.begin() + mid, numbers.end());

	// Hacemos recursiva a esta función ya que hay que volver a dividir las listas, así hasta que quede uno, lo cual significará que está ordenado
	left = mergeInsert(left);
	right = mergeInsert(right);

	// Y luego, ordenamos
	return (mergeVctr(left, right));
}

/* --- DEQUE --- */
std::deque<int>	PmergeMe::mergeDq(std::deque<int> left, std::deque<int> right) {
	std::deque<int>	ordered;
	unsigned long int	i = 0;
	unsigned long int	j = 0;

	// Vamos a rellenar con un lado de la lista primero depeniendo de si un número es mas grande que el otro
	while (i < left.size() && j < right.size()) {
		if (left[i] <= right[j]) {
			ordered.push_back(left[i]);
			i++;
		}
		else {
			ordered.push_back(right[j]);
			j++;
		}
	}

	// Ahora, vamos a rellenar el otro lado si la otra lista ya ha sido rellenada
	while (i < left.size()) {
		ordered.push_back(left[i]);
		i++;
	}
	while (j < right.size()) {
		ordered.push_back(right[j]);
		j++;
	}

	return (ordered);
}

std::deque<int>	PmergeMe::mergeInsertDq(std::deque<int> numbers) {
	if (numbers.size() <= 1)
		return (numbers);
	int	mid = numbers.size() / 2;
	std::deque<int>	left(numbers.begin(), numbers.begin() + mid);
	std::deque<int>	right(numbers.begin() + mid, numbers.end());

	// Hacemos recursiva a esta función ya que hay que volver a dividir las listas, así hasta que quede uno, lo cual significará que está ordenado
	left = mergeInsertDq(left);
	right = mergeInsertDq(right);

	// Y luego, ordenamos
	return (mergeDq(left, right));
}

void	PmergeMe::numbersInserter(int number, bool boo) {
	if (boo) {
		if (hasDuplicates(numbers)) {
			return ;
		}
		std::vector<int>::iterator	it;
		std::vector<int>	after;

		clock_t	vc_start_time;
		clock_t	dq_start_time;
		clock_t	vc_end_time;
		clock_t	dq_end_time;

		std::cout << "Before: ";
		vectorPrinter(numbers);

		vc_start_time = clock();
		dq_start_time = clock();

		after = mergeInsert(numbers);
		vc_end_time = clock();

		mergeInsertDq(dqNumbers);
		dq_end_time = clock();

		std::cout << "After: ";
		vectorPrinter(after);
		std::cout << std::endl;
		double	timeMsVc = static_cast<double>(vc_end_time - vc_start_time) / CLOCKS_PER_SEC * 1000;
		double	timeMsDq = static_cast<double>(dq_end_time - dq_start_time) / CLOCKS_PER_SEC * 1000;
		std::cout << "Time to process a range of " << numbers.size() << " elements with std::vector : " << timeMsVc << "ms" << std::endl;
		std::cout << "Time to process a range of " << numbers.size() << " elements with std::deque : " << timeMsDq << "ms" << std::fixed << std::endl;
	}
	numbers.push_back(number);
	dqNumbers.push_back(number);
}

/* Public functions */
bool	hasDuplicates(std::vector<int> finalList) {
	for (unsigned long i = 0; i < finalList.size(); ++i) {
		for (unsigned long j = 1 + i; j < finalList.size(); ++j) {
			if (finalList[i] == finalList[j]) {
				std::cout << "[\033[31m✗\033[0m] A duplicate was found. Check your arguments." << std::endl;
				return true;
			}
		}
	}
	return false;
}
