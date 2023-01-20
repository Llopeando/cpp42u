/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:37:16 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/20 15:44:40 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// --- Constructors and destructor --- //
Intern::Intern() {
	// Actions functions names creator
	actions[0] = &Intern::PresidentialExecution;
	actions[1] = &Intern::RobotomyExecution;
	actions[2] = &Intern::ShrubberyExecution;

	// Form actions names creator
	formActionsNames[0] = "presidential";
	formActionsNames[1] = "robotomy";
	formActionsNames[2] = "shrubbery";
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &ref) {
	*this = ref;
	std::cout << "Intern COPY constructor called" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

// --- Overload operator --- //
Intern	&Intern::operator=(const Intern &ref) {
	if (this != &ref)
		*this = ref;
	std::cout << "Intern assignation (=) operator called" << std::endl;
	return (*this);
}

// --- Functions --- //
AForm	*Intern::PresidentialExecution(std::string targetName) {
	return (new PresidentialPardonForm(targetName));
}

AForm	*Intern::RobotomyExecution(std::string targetName) {
	return (new RobotomyRequestForm(targetName));
}

AForm	*Intern::ShrubberyExecution(std::string targetName) {
	return (new ShrubberyCreationForm(targetName));
}

AForm	*Intern::makeForm(std::string formName, std::string targetName) {
	for (int c = 0; c < 3; c++)
	{
		if (formActionsNames[c] == formName)
		{
			std::cout << "ℹ️  \033[1;37mIntern creates " << formName << "\033[0m" << std::endl;
			return ((this->*(actions[c]))(targetName));
		}
	}
	throw Intern::InternCreationException();
}

// --- Exceptions --- //
const char	*Intern::InternCreationException::what() const throw() {
	return ("The form is not valid! Currently available: 'presidential', 'robotomy' and 'shrubbery'");
}
