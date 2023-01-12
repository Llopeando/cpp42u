/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:11:43 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/12 19:09:07 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	public:
		Form();
		Form(std::string const newSignName, int const newFormGrade, int const newExecuteGrade);
		// Form(const Form &ref);
		~Form();

		//Setters and getters
		std::string	getFormName() const;
		int			getFormGrades(int boo) const;
		bool		getBoolVal() const;

		//Functions
		void	beSigned(const Bureaucrat &ref);

		//Exception throwers and functions
		class	GradeTooHighException : public std::exception {  //We should specify that exception is public, because if not, it will be private as it is a class
			virtual const char *what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};

		void	msgExceptionCheck(int formGrade, int executeGrade);

		//Overload operators
		// Form	&operator=(const Form &ref);
	private:
		std::string const formName;
		bool isSigned;
		int const signFormGrade;
		int const signExecuteGrade;
};
std::ostream	&operator<<(std::ostream &o, Form const &ref);

#endif