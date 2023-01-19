/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:37:16 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/19 17:15:32 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// --- Constructors and destructor --- //
Intern::Intern() {
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &ref) {
	*this = ref;
	std::cout << "Intern COPY constructor called" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
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
	AForm *(Intern::*actions[3])(std::string) = {&Intern::PresidentialExecution, &Intern::RobotomyExecution, &Intern::ShrubberyExecution};
	std::string formActionsNames[3] = {"presidential", "robotomy", "shrubbery"};
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
