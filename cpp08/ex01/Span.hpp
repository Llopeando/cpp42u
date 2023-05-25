/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:14:12 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/25 16:17:54 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP_
#define SPAN_HPP_
#include <iostream>
#include <string>
#include <list>
#include <algorithm>

class Span
{
	public:
		/* Constructors and destructor */
		Span();
		Span(const Span &ref);
		Span(unsigned int	maxIntegers);
		~Span();

		/* Overload operator */
		Span	&operator=(const Span &ref);

		/* Member functions */
		void	addNumber(int numberToAssign);
		void	addManyNumbers(int numbersQToAssign);
		int		shortestSpan();
		int		longestSpan();

		/* Exceptions */
		class	SpanMaxQuantityException: public std::exception {
			virtual const char *what() const throw() {
				return ("[\033[31m✗\033[0m] You've reached the max Span capacity!");
			}
		};

		class	SpanSmallSizeException: public std::exception {
			virtual const char *what() const throw() {
				return ("[\033[31m✗\033[0m] The Span List is too small or there is no content!");
			}
		};
	private:
		std::list<int>	spanList;
		unsigned int	maxQuantity;
};

#endif