/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:14:01 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/18 16:43:34 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// --- Constructors and destructor --- //
RobotomyRequestForm::RobotomyRequestForm() : AForm("MissingnoRobotomy", 72, 45) {
	//std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &targetName) : AForm(targetName, 72, 45) {
	//std::cout << "RobotomyRequestForm NAME constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref) {
	//std::cout << "RobotomyRequestForm COPY constructor called" << std::endl;
	*this = ref;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	//std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

// --- Overload operator --- //
RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &ref) {
	std::cout << "RobotomyRequestForm assignation (=) operator called" << std::endl;
	ref.getBoolVal();
	return (*this);
}

// --- Functions --- //
void	RobotomyRequestForm::execute(const Bureaucrat &ref) const {
	if (this->getFormGrades(1) >= 73 || this->getFormGrades(0) >= 46)
		throw AForm::GradeActionInvalidException();
	else {
		srand(time(NULL)); //We generate the time value here so it can be used to "randomize" the conditions
		if (rand() % 2)
			std::cout << "✅ \033[1;32m" << ref.getName() << " has been successfully robotomized!\033[0m" << std::endl;
		else
			std::cout << "❌ \033[1;31m" << ref.getName() << " has not been robotomized!\033[0m" << std::endl;
	}
}