/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:41:38 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/17 15:50:06 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main() {
	try {
		Bureaucrat	a("ullorent", 130);
		AForm *b = NULL;

		b = new ShrubberyCreationForm();
		a.signForm(*b);
		a.executeForm(*b);
		// a.setMinusGrade();
		// a.setMinusGrade();
		// for (int c = 0; c < 45; c++)
		// {
		// 	a.setPlusGrade();
		// }

		// std::cout << "\033[1;37m" << a << "\033[0m";
	}
	catch (std::exception &e) { //Here we catch the exception by referencing it
		std::cout << "\033[1;33m[./maggots EXCEPTION]\033[1;31m " << e.what() << "\033[0m " << std::endl;
	}
	return (0);
}
