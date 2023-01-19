/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:41:38 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/19 17:21:38 by ullorent         ###   ########.fr       */
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
		Bureaucrat	a("ullorent", 25);
		// Bureaucrat	b("ecamara", 25);

		// RobotomyRequestForm formA("Test");
		// a.executeCheck(formA);
		// b.executeCheck(formA);
		// a.executeForm(formA);
		// b.executeForm(formA);
		// std::cout << std::endl;

		// ShrubberyCreationForm formB("Testiwis");
		// a.executeCheck(formB);
		// b.executeCheck(formB);
		// a.executeForm(formB);
		// b.executeForm(formB);
		// std::cout << std::endl;

		// PresidentialPardonForm formC("Testizri");
		// a.executeCheck(formC);
		// b.executeCheck(formC);
		// a.executeForm(formC);
		// b.executeForm(formC);
		Intern	someRandomIntern;
		AForm	*rrf;

		rrf = someRandomIntern.makeForm("shrubbery", "ullorent");
		rrf->execute(a);
	}
	catch (std::exception &e) { //Here we catch the exception by referencing it
		std::cout << "\033[1;33m[./formnt EXCEPTION]\033[1;31m " << e.what() << "\033[0m " << std::endl;
	}
	return (0);
}
