/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:36:05 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/20 15:44:19 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP_
#define INTERN_HPP_
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &ref);
		~Intern();

		//Functions and executors
		AForm	*PresidentialExecution(std::string targetName);
		AForm	*RobotomyExecution(std::string targetName);
		AForm	*ShrubberyExecution(std::string targetName);

		AForm	*makeForm(std::string formName, std::string targetName);

		//Exception throwers and functions
		class	InternCreationException : public std::exception {  //We should specify that exception is public, because if not, it will be private as it is a class
			virtual const char *what() const throw();
		};

		//Overload operator
		Intern	&operator=(const Intern &ref);
	protected:
		AForm *(Intern::*actions[3])(std::string);
		std::string formActionsNames[3];
};

#endif