/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:52:11 by ullorent          #+#    #+#             */
/*   Updated: 2023/09/20 15:31:40 by ullorent         ###   ########.fr       */
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
int	RPN::operate(int a, int b, char oprtr) {
	switch (oprtr) {
		case '+':
			return (a + b);
		case '-':
			return (a - b);
		case '/':
			return (a / b);
		case '*':
			return (a * b);
	}
	return (0);
}

bool	RPN::is_operator(char oprtr) {
	if (oprtr == '+' || oprtr == '-' || oprtr == '/' || oprtr == '*') {
		return true;
	}
	return false;
}

bool	RPN::argumentsTaker(std::string str) {
	std::stack<int>	numbers;

	for (uint32_t i = 0; i < str.size(); i++) {
		if (is_operator(str[i])) {
			if (numbers.size() <= 1) {
				std::cout << "[\033[31m✗\033[0m] You've introduced invalid arguments! Check your operators" << std::endl;
				return false;
			}
			int	b = numbers.top();
			numbers.pop();
			int	a = numbers.top();
			numbers.pop();

			if (b == 0 && str[i] == '/') { /* Divided by 0 checker */
				std::cout << "[\033[31m✗\033[0m] You cannot divide by 0!" << std::endl;
				return false;
			}
			numbers.push(operate(a, b, str[i]));
		}
		if (isdigit(str[i])) {
			numbers.push(str[i] - '0');
		}
	}
	if (numbers.size() != 0) {
		std::cout << "Result: " << numbers.top() << std::endl;
	}
	return true;
}
