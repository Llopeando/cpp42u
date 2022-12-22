/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:06:35 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/22 18:38:12 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// --- Constructors and destructor --- //
Ice::Ice() : AMateria("ice") {
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &ref) {
	std::cout << "Ice COPY constructor called" << std::endl;
	*this = ref;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

// --- Functions --- //
Ice	*Ice::clone() const {
	Ice	*realmateria = new Ice(*this);
	return (realmateria);
}

// void	Ice::use(ICharacter &target) {
// 	std::cout << "* shoots an ice bolt at " << name << " *" << std::endl;
// }
