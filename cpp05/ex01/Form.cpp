/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:12:28 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/13 18:49:13 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// --- Constructors and destructor --- //
Form::Form() : formName("Missingno"), isSigned(false), signFormGrade(100), signExecuteGrade(100) {
	msgExceptionCheck(signFormGrade, signExecuteGrade);
	std::cout << "Form constructor called" << std::endl;
	std::cout << "\033[1;37mName: " << formName << " | IsSigned: " << isSigned << " | SignFormGrade: " << signFormGrade << " | signExecuteGrade: " << signExecuteGrade << "\033[0m" << std::endl;
}

Form::Form(std::string const newSignName, int const newFormGrade, int const newExecuteGrade) :
	formName(newSignName), isSigned(false), signFormGrade(newFormGrade), signExecuteGrade(newExecuteGrade)
{
	msgExceptionCheck(newFormGrade, newExecuteGrade);
	std::cout << "Form NAME constructor called" << std::endl;
}

// Form::Form(const Form &ref) : formName(ref.getFormName()), isSigned(false), signFormGrade(ref.getFormGrades(1)), signExecuteGrade(ref.getFormGrades(0)) {
// 	std::cout << "Form COPY constructor called" << std::endl;
// 	*this = ref;
// }

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

// --- Overload operators --- //
// Form	&Form::operator=(const Form &ref) {
// 	std::cout << "Form assignation operator called (=)" << std::endl;
// }

std::ostream	&operator<<(std::ostream &o, Form const &ref) {
	o << "ℹ️  [" << ref.getFormName() << "] | Form Grade: " << ref.getFormGrades(1) << " | Execute grade: " << ref.getFormGrades(0) << " | The form is signed? " << ref.getBoolVal() << std::endl;
	return (o);
}

// --- Getters and setters --- //
std::string	Form::getFormName() const {
	return (this->formName);
}

int	Form::getFormGrades(int boo) const {
	if (boo == 1)
		return (this->signFormGrade);
	else
		return (this->signExecuteGrade);
}

bool	Form::getBoolVal() const {
	return (this->isSigned);
}

// --- Functions --- //
void	Form::beSigned(const Bureaucrat &ref) {
	if (ref.getGrade() > this->signFormGrade)
		throw Form::GradeTooLowException();
	else
		this->isSigned = true;
}

// --- Exceptions --- //
const char	*Form::GradeTooHighException::what() const throw() {
	return ("The form grade is too high!");
}

const char	*Form::GradeTooLowException::what() const throw() {
	return ("The form grade is too low!");
}

void	Form::msgExceptionCheck(int formGrade, int executeGrade) {
	if (formGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
	else if (formGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
}
