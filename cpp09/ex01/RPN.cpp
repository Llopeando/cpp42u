/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:52:11 by ullorent          #+#    #+#             */
/*   Updated: 2023/09/12 17:24:38 by ullorent         ###   ########.fr       */
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
bool	RPN::argumentsTaker(std::stack<char *> argList) {
	std::stack<double>	nmbrStack;

	while (argList.size() != 0) {
		
	}
	return false;
}
