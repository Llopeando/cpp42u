/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:14:53 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/24 18:57:18 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* --- Constructors and destructor --- */
Span::Span() : maxQuantity(0) { }

Span::Span(unsigned int maxIntegers) : maxQuantity(maxIntegers) { }

Span::~Span() { }

/* --- Overload operator --- */
Span	&Span::operator=(const Span &ref) {
	if (this != &ref)
		*this = ref;
	return (*this);
}

/* --- Functions --- */
void	Span::addNumber(int numberToAssign) {
	if (spanList.size() == this->maxQuantity)
		throw SpanMaxQuantityException();
	spanList.push_back(numberToAssign);
}

void	Span::addManyNumbers(int numbersQToAssign) {
	std::list<int>::iterator	begin = spanList.begin();
	std::list<int>::iterator	end = spanList.end();
	int	i = 0;

	while (begin != end && i < numbersQToAssign) {
		*begin = i;
		++begin;
		++i;
	}

	for (int i = 0; i < numbersQToAssign; ++i) {
		spanList.push_back(i);
	}
}

int	Span::shortestSpan() {
	std::list<int>::iterator	iterator;
	std::list<int>::iterator	prevIterator;

	if (spanList.size() == 1 || spanList.size() < 1)
		throw SpanSmallSizeException();
	spanList.sort();
	int shortestSpan = std::numeric_limits<int>::max();
	iterator = spanList.begin();
	prevIterator = iterator;

	++iterator;
	while (iterator != spanList.end())
	{
		int span = *iterator - *prevIterator;
		if (span < shortestSpan) {
			shortestSpan = span;
		}
		++iterator;
		++prevIterator;
	}
	return (shortestSpan);
}

int	Span::longestSpan() {
	int	minSpan;
	int	maxSpan;

	if (spanList.size() == 1 || spanList.size() < 1)
		throw SpanSmallSizeException();
	minSpan = *std::min_element(spanList.begin(), spanList.end());
	maxSpan = *std::max_element(spanList.begin(), spanList.end());
	return (maxSpan - minSpan);
}
