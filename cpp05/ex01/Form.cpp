/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:12:28 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/11 19:21:32 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// --- Constructors and destructor --- //
Form::Form() {
	boo = 0;
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form &ref) {
	std::cout << "Form COPY constructor called" << std::endl;
	*this = ref;
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

// --- Functions --- //

// --- Exceptions --- //
const char	*Form::GradeTooHighException::what() const throw() {
	return ("The form grade is higher than the highest possible form grade!");
}

const char	*Form::GradeTooLowException::what() const throw() {
	return ("The form grade is lower than the lowest possible form grade!");
}
