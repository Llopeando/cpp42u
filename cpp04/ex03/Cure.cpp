/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:08:00 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/22 18:58:26 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// --- Constructors and destructor --- //
Cure::Cure() : AMateria("cure") {
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &ref) {
	std::cout << "Cure COPY constructor called" << std::endl;
	*this = ref;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

// --- Functions --- //
Cure	*Cure::clone() const {
	Cure	*realmateria = new Cure(*this);
	return (realmateria);
}

// void	Cure::use(ICharacter &target) {
// 	std::cout << "* heals " << name << "'s wounds" << std::endl;
// }
