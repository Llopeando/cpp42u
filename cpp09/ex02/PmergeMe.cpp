/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:19:19 by ullorent          #+#    #+#             */
/*   Updated: 2023/10/02 14:41:57 by ullorent         ###   ########.fr       */
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
void	vectorPrinter(std::vector<int> vct) {
	std::vector<int>::iterator	it;

	for (it = vct.begin(); it != vct.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

std::vector<int>	PmergeMe::mergeVctr(std::vector<int> left, std::vector<int> right, std::vector<int> numbers) {
	(void)right;
	(void)numbers;
	return (left);
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
	return (mergeVctr(left, right, numbers));
}

std::vector<int>	PmergeMe::numbersInserter(int number, bool boo) {
	if (boo) {
		std::vector<int>::iterator	it;

		std::cout << "Before: ";
		for (it = numbers.begin(); it != numbers.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
		mergeInsert(numbers);
	}
	numbers.push_back(number);
	return (numbers);
}
