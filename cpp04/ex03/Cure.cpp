/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:08:00 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/09 18:18:44 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

// --- Constructors and destructor --- //
Cure::Cure() : AMateria("cure") {
	//std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &ref) {
	*this = ref;
	//std::cout << "Cure COPY constructor called" << std::endl;
}

Cure::~Cure() {
	//std::cout << "Cure destructor called" << std::endl;
}

// --- Functions --- //
AMateria	*Cure::clone() const {
	Cure	*realmateria = new Cure(*this);
	return (realmateria);
}

void	Cure::use(ICharacter &target) {
	std::cout << "\033[1;37m* heals " << target.getName() << "'s wounds *\033[0m" << std::endl;
}
