/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:41:38 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/12 19:03:32 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat a("ullorent", 4);

		a.setMinusGrade();
		a.setMinusGrade();
		for (int c = 0; c < 5; c++)
		{
			a.setPlusGrade();
		}

		std::cout << "\033[1;37m" << a << "\033[0m" << std::endl;
	}
	catch (std::exception &e) { //Here we catch the exception by referencing it
		std::cout << "\033[1;33m[./bureaucrat EXCEPTION]\033[1;31m " << e.what() << "\033[0m " << std::endl;
	}
	return (0);
}
