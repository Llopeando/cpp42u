/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:19:19 by ullorent          #+#    #+#             */
/*   Updated: 2023/09/29 14:43:39 by ullorent         ###   ########.fr       */
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
PmergeMe	PmergeMe::operator=(const PmergeMe &ref) {
	if (this != &ref)
		*this = ref;
	// std::cout << "PmergeMe (=) operator overload called" << std::endl;
	return (*this);
}

/* Member functions */
std::vector<int>	PmergeMe::numbersInserter(int number, bool boo) {
	if (boo) {
		std::vector<int>::iterator	it;

		std::cout << "Before: ";
		for (it = numbers.begin(); it != numbers.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
	numbers.push_back(number);
	return (numbers);
}
