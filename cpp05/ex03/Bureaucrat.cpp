/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:12:43 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/18 16:50:07 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// --- Constructors and destructor --- //
Bureaucrat::Bureaucrat() {
	//std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const newName, int newGrade) : name(newName) {
	msgExceptionCheck(newGrade);
	grade = newGrade;
	//std::cout << "Bureaucrat NAME constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref) {
	*this = ref;
	//std::cout << "Bureaucrat COPY constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	//std::cout << "Bureaucrat destructor called" << std::endl;
}

// --- Operator overload --- //
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref) {
	std::cout << "Bureaucrat assignation (=) operator called" << std::endl;
	this->grade = ref.getGrade();
	return (*this);
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs) {
	o << "ℹ️  " << rhs.getName() << " Bureaucrat grade: " << rhs.getGrade() << std::endl;
	return (o);
}

// --- Functions --- //
void	Bureaucrat::signForm(AForm &ref) {
	try {
		ref.beSigned(*this);
		std::cout << "🖊️  \033[1;33m"<< this->name << " signed " << ref.getFormName() << "\033[0m" << std::endl;
	}
	catch (std::exception &excp) {
		std::cout << "\033[1;33m[./formnt EXCEPTION]\033[1;31m " << this->name << " could not sign " << ref.getFormName() << " because \033[1;37m[" << excp.what() << "]\033[0m" << std::endl;
	}
}

void	Bureaucrat::executeCheck(AForm &ref) {
	try {
		ref.beSigned(*this);
	}
	catch (std::exception &excp) {
		std::cout << "\033[1;33m[./formnt EXCEPTION]\033[1;31m " << this->name << " could not execute the " << ref.getFormName() << " form action due to \033[1;37m[" << excp.what() << "]\033[0m" << std::endl;		
	}
}

void	Bureaucrat::executeForm(AForm const &ref) {
	try {
		ref.execute(*this);
		std::cout << "ℹ️  \033[1;37m[" << this->getName() << " executed " << ref.getFormName() << "]\033[0m" << std::endl;
	}
	catch (std::exception &excp) {
		std::cout << "\033[1;33m[./formnt EXCEPTION]\033[1;31m " << this->name << " could not execute " << ref.getFormName() << " because \033[1;37m[" << excp.what() << "]\033[0m" << std::endl;
	}
}

// --- Getters and setters --- //
std::string	Bureaucrat::getName() const {
	return (this->name);
}

int	Bureaucrat::getGrade() const {
	return (this->grade);
}

void Bureaucrat::setPlusGrade() {
	this->grade--;
	msgExceptionCheck(this->grade);
}

void Bureaucrat::setMinusGrade() {
	this->grade++;
	msgExceptionCheck(this->grade);
}

// --- Exceptions --- //
const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("The grade is higher than the highest possible grade!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("The grade is lower than the lowest possible grade!");
}

void	Bureaucrat::msgExceptionCheck(int grade) {
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}
