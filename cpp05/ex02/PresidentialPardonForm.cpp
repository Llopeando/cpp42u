/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:15:14 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/18 16:48:14 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// --- Constructors and destructor --- //
PresidentialPardonForm::PresidentialPardonForm() : AForm("MissingnoPresidential", 25, 5) {
	//std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &targetName) : AForm(targetName, 25, 5) {
	//std::cout << "PresidentialPardonForm NAME constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref) {
	//std::cout << "PresidentialPardonForm COPY constructor called" << std::endl;
	*this = ref;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	//std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

// --- Overload operator --- //
PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &ref) {
	std::cout << "PresidentialPardonForm assignation (=) operator called" << std::endl;
	ref.getBoolVal();
	return (*this);
}

// --- Functions --- //
void	PresidentialPardonForm::execute(const Bureaucrat &ref) const {
	if (this->getFormGrades(1) >= 26 || this->getFormGrades(0) >= 6)
		throw AForm::GradeActionInvalidException();
	else {
		std::cout << "😊 \033[1;36m" << ref.getName() << " has been pardoned by Zaphod Beeblerox!\033[0m" << std::endl;
	}
}
