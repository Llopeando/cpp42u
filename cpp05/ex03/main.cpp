/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:41:38 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/20 15:43:54 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main() {
	try {
		Bureaucrat	a("ecamara", 25);
		Intern	someRandomIntern;
		AForm	*rrf;

		rrf = someRandomIntern.makeForm("shrubbery", "FormShrubbery");
		a.signForm(*rrf);
		a.executeForm(*rrf);
		delete	rrf;
	}
	catch (std::exception &e) { //Here we catch the exception by referencing it
		std::cout << "\033[1;33m[./formnt EXCEPTION]\033[1;31m " << e.what() << "\033[0m " << std::endl;
	}
	return (0);
}
