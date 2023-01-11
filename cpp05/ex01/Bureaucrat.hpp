/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:07:46 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/11 19:16:39 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_
#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string const newName, int newGrade);
		Bureaucrat(const Bureaucrat &ref);
		~Bureaucrat();

		//Setters and getters
		std::string	getName() const;
		int	getGrade() const;
		void	setPlusGrade();
		void	setMinusGrade();

		//Exception thowers and functions
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw(); //With this, we can inherit std::exception so we can redefine it with a custom exception message in base class
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		void	msgExceptionCheck(int grade);

		//Overload operators
		Bureaucrat	&operator=(const Bureaucrat &ref);
	protected:
		std::string const name;
		int grade;
};
std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif