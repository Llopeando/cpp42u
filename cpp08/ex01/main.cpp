/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:57:59 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/24 18:58:01 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	/* Test with 10000 numbers with numbers from 1 to 10000 in order */
	int		numbersToAssign = 10000;
	Span	span = Span(numbersToAssign);

	try {
		span.addManyNumbers(numbersToAssign);

		std::cout << "-------- \033[1;37mTest from 1 to 10000 in order\033[0m --------" << std::endl;
		std::cout << "Shortest span: \033[1;37m" << span.shortestSpan() << "\033[0m" << std::endl;
		std::cout << "Longest span: \033[1;37m"  << span.longestSpan() << "\033[0m" << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	/* Test with 5 random numbers (manually placed)*/
	Span	randomSpan = Span(5);
	try {
		randomSpan.addNumber(6);
		randomSpan.addNumber(-3);
		randomSpan.addNumber(17);
		randomSpan.addNumber(-9);
		randomSpan.addNumber(11);

		std::cout << "\n-------- \033[1;37mTest 5 random numbers\033[0m ----------------" << std::endl;
		std::cout << "Shortest span: \033[1;37m" << randomSpan.shortestSpan() << "\033[0m" << std::endl;
		std::cout << "Longest span: \033[1;37m"  << randomSpan.longestSpan() << "\033[0m" << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
