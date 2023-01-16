/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:11:43 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/16 17:40:49 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	public:
		AForm();
		AForm(std::string const newSignName, int const newFormGrade, int const newExecuteGrade);
		AForm(const AForm &ref);
		virtual ~AForm();

		//Setters and getters
		virtual std::string	getFormName() const = 0;
		virtual int			getFormGrades(int boo) const = 0;
		virtual bool		getBoolVal() const = 0;

		//Functions
		void	beSigned(const Bureaucrat &ref);

		//Exception throwers and functions
		class	GradeTooHighException : public std::exception {  //We should specify that exception is public, because if not, it will be private as it is a class
			virtual const char *what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};

		class	GradeForASCIITreeInvalidException : public std::exception {
			virtual const char *what() const throw();
		};

		void	msgExceptionCheck(int formGrade, int executeGrade);

		//Overload operators
		AForm	&operator=(const AForm &ref);
	private:
		std::string const formName;
		bool isSigned;
		int const signFormGrade;
		int const signExecuteGrade;
};
std::ostream	&operator<<(std::ostream &o, AForm const &ref);

#endif