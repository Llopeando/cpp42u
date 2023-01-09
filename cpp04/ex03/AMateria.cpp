/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:01:07 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/09 18:51:51 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

// --- Constructors and destructor --- //
AMateria::AMateria() : type("Missingno") {
	//std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type) {
	//std::cout << "AMateria COPY constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &ref) {
	*this = ref;
	//std::cout << "AMateria COPY constructor called" << std::endl;
}

AMateria::~AMateria() {
	//std::cout << "AMateria destructor called" << std::endl;
}

// --- Functions --- //
std::string const &AMateria::getType() const {
	return (this->type);
}

void	AMateria::use(ICharacter &target) {
	std::cout << "* " << target.getName() << " makes random materia things *" << std::endl;
}