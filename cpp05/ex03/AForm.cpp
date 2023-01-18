/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:12:28 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/18 16:47:12 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// --- Constructors and destructor --- //
AForm::AForm() : formName("Missingno"), isSigned(false), signFormGrade(10), signExecuteGrade(10) {
	msgExceptionCheck(signFormGrade, signExecuteGrade);
	//std::cout << "AForm constructor called" << std::endl;
	std::cout << "\033[1;37mName: " << formName << " | IsSigned: " << isSigned << " | SignFormGrade: " << signFormGrade << " | signExecuteGrade: " << signExecuteGrade << "\033[0m" << std::endl;
}

AForm::AForm(std::string const newSignName, int const newFormGrade, int const newExecuteGrade) :
	formName(newSignName), isSigned(false), signFormGrade(newFormGrade), signExecuteGrade(newExecuteGrade)
{
	msgExceptionCheck(newFormGrade, newExecuteGrade);
	//std::cout << "AForm NAME constructor called" << std::endl;
}

AForm::AForm(const AForm &ref) : formName(ref.getFormName()), isSigned(false), signFormGrade(ref.getFormGrades(1)), signExecuteGrade(ref.getFormGrades(0)) {
	//std::cout << "AForm COPY constructor called" << std::endl;
	*this = ref;
}

AForm::~AForm() {
	//std::cout << "AForm destructor called" << std::endl;
}

// --- Overload operators --- //
AForm	&AForm::operator=(const AForm &ref) {
	std::cout << "AForm assignation operator called (=)" << std::endl;
	this->isSigned = ref.getBoolVal();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, AForm const &ref) {
	o << "ℹ️  [" << ref.getFormName() << "] | AForm Grade: " << ref.getFormGrades(1) << " | Execute grade: " << ref.getFormGrades(0) << " | The form is signed? " << ref.getBoolVal() << std::endl;
	return (o);
}

// --- Getters and setters --- //
std::string	AForm::getFormName() const {
	return (this->formName);
}

int	AForm::getFormGrades(int boo) const {
	if (boo == 1)
		return (this->signFormGrade);
	else
		return (this->signExecuteGrade);
}

bool	AForm::getBoolVal() const {
	return (this->isSigned);
}

// --- Functions --- //
void	AForm::beSigned(const Bureaucrat &ref) {
	//std::cout << "this->signFormGrade value: " << this->signFormGrade << std::endl;
	if (ref.getGrade() > this->signFormGrade)
		throw AForm::GradeTooLowException();
	else
		this->isSigned = true;
}

// --- Exceptions --- //
const char	*AForm::GradeTooHighException::what() const throw() {
	return ("The form grade is too high!");
}

const char	*AForm::GradeTooLowException::what() const throw() {
	return ("The form grade is too low!");
}

const char	*AForm::GradeActionInvalidException::what() const throw() {
	return ("The grades or the grade are too low!");
}

void	AForm::msgExceptionCheck(int formGrade, int executeGrade) {
	if (formGrade > 150 || executeGrade > 150)
		throw AForm::GradeTooLowException();
	else if (formGrade < 1 || executeGrade < 1)
		throw AForm::GradeTooHighException();
}
