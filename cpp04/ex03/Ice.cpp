/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:06:35 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/09 18:22:44 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

// --- Constructors and destructor --- //
Ice::Ice() : AMateria("ice") {
	//std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &ref) {
	*this = ref;
	//std::cout << "Ice COPY constructor called" << std::endl;
}

Ice::~Ice() {
	//std::cout << "Ice destructor called" << std::endl;
}

// --- Functions --- //
AMateria	*Ice::clone() const {
	Ice	*realmateria = new Ice(*this);
	return (realmateria);
}

void	Ice::use(ICharacter &target) {
	std::cout << "\033[1;37m* shoots an ice bolt at " << target.getName() << " *\033[0m" << std::endl;
}
