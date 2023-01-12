/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:12:43 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/12 19:41:48 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// --- Constructors and destructor --- //
Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const newName, int newGrade) : name(newName) {
	msgExceptionCheck(newGrade);
	grade = newGrade;
	std::cout << "Bureaucrat NAME constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref) {
	*this = ref;
	std::cout << "Bureaucrat COPY constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

// --- Operator overload --- //
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref) {
	std::cout << "Bureaucrat assignation (=) operator called" << std::endl;
	this->grade = ref.getGrade();
	return (*this);
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}

// --- Functions --- //
void	Bureaucrat::signForm(const Form &ref) {
	if (ref.getBoolVal() == true)
		std::cout << this->name << " signed " << ref.getFormName() << std::endl;
	else
		std::cout << this->name << " couldn't sign " << ref.getFormName() << " because yes" << std::endl;
}

// --- Getters and setters --- //
std::string	Bureaucrat::getName() const {
	return (this->name);
}

int	Bureaucrat::getGrade() const {
	return (this->grade);
}

void Bureaucrat::setPlusGrade() {
	this->grade++;
	msgExceptionCheck(this->grade);
}

void Bureaucrat::setMinusGrade() {
	this->grade--;
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
