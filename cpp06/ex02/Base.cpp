/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:23:38 by ullorent          #+#    #+#             */
/*   Updated: 2023/03/09 12:43:18 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

// --- Destructor --- //
Base::~Base() {
	// std::cout << "Base destructor called" << std::endl;
}

// --- Functions --- //
Base*	generate() {
	srand(time(NULL));
	int	randvalue = rand() % 3;

	if (randvalue == 0)
		return (new A());
	if (randvalue == 1)
		return (new B());
	return (new C());
}

void	identify(Base *p) {
	if (dynamic_cast<A *>(p) != nullptr)  //En el caso de que intentemos castear un puntero que no sea el mismo tipo del objeto actual, soltará un null pointer
		std::cout << "\033[1;37mPointer: \033[0mA" << std::endl;
	if (dynamic_cast<B *>(p) != nullptr)
		std::cout << "\033[1;37mPointer: \033[0mB" << std::endl;
	if (dynamic_cast<C *>(p) != nullptr)
		std::cout << "\033[1;37mPointer: \033[0mC" << std::endl;
}

void	identify(Base &p) {
	try {
		A &reference = dynamic_cast<A &>(p);
		std::cout << "\033[1;37mReference: \033[0mA" << std::endl;
		(void)reference; //Ponemos lo del void porque si no el compilador nos dará problemas
	}
	catch (std::bad_cast &e) {} //Como estamos intentando castear una referencia a un tipo que no es el objeto actual, en las referencias, siempre soltará un bad_cast
	try {
		B &reference = dynamic_cast<B &>(p);
		std::cout << "\033[1;37mReference: \033[0mB" << std::endl;
		(void)reference;
	}
	catch (std::bad_cast &e) {}
	try {
		C &reference = dynamic_cast<C &>(p);
		std::cout << "\033[1;37mReference: \033[0mC" << std::endl;
		(void)reference;
	}
	catch (std::bad_cast &e) {}
}
