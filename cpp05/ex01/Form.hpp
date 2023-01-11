/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:11:43 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/11 19:21:27 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_
#include <iostream>
#include "Bureaucrat.hpp"

class Form : public Bureaucrat
{
	public:
		Form();
		Form(const Form &ref);
		~Form();

		//Exception throwers and functions
		class	GradeTooHighException : std::exception {
			public:
				virtual const char *what() const throw();
		};

		class	GradeTooLowException : std::exception {
			public:
				virtual const char *what() const throw();
		};

	private:
		std::string const formName;
		bool boo;
		int const signFormGrade;
		int const signExecuteGrade;
};

#endif