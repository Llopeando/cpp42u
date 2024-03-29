/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:41:38 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/13 18:55:16 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat	a("ullorent", 140);
		Form		b("Form Nº1", 100, 100);

		a.setMinusGrade();
		a.setMinusGrade();
		for (int c = 0; c < 45; c++)
		{
			a.setPlusGrade();
		}
		a.signForm(b);

		std::cout << "\033[1;37m" << a << "\033[0m";
		std::cout << "\033[1;37m" << b << "\033[0m" << std::endl;
	}
	catch (std::exception &e) { //Here we catch the exception by referencing it
		std::cout << "\033[1;33m[./maggots EXCEPTION]\033[1;31m " << e.what() << "\033[0m " << std::endl;
	}
	return (0);
}
