/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:52:11 by ullorent          #+#    #+#             */
/*   Updated: 2023/09/07 14:03:32 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* Constructors and destructor */
RPN::RPN() {
	// std::cout << "RPN constructor called" << std::endl;
}

RPN::RPN(const RPN &ref) {
	*this = ref;
	// std::cout << "RPN COPY constructor called" << std::endl;
}

RPN::~RPN() {
	// std::cout << "RPN destructor called" << std::endl;
}

/* Overload operator */
RPN	RPN::operator=(const RPN &ref) {
	if (this != &ref)
		*this = ref;
	// std::cout << "RPN (=) operator overload called" << std::endl;
	return (*this);
}

/* Member functions */
bool	RPN::argumentsTaker(std::list<char *> argList) {
	std::list<double>	stack;

	while (argList.size() != 0) {
		char *token = argList.front();
		argList.pop_front();

		if (isdigit(token[0])) {
			stack.push_back(atof(token));
		}
		else if (token[0] == '+' || token[0] == '-' || token[0] == '/' || token[0] == '*') {
			double	operand2 = stack.back();
			stack.pop_back();
			std::cout << "es un +\n" << std::endl;
			double	operand1 = stack.back();
			stack.pop_back();

			if (token[0] == '+') {
				std::cout << "es un +\n" << std::endl;
				stack.push_back(operand1 + operand2);
			}
		}
	}
	std::cout << "Resultado: " << stack.front() << std::endl;
	return false;
}
