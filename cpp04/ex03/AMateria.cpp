/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:01:07 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/22 18:46:01 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
// --- Constructors and destructor --- //
AMateria::AMateria() : type("Missingno") {
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type) {
	std::cout << "AMateria COPY constructor called" << std::endl;
	std::cout << "\033[1;37mType: " << type << "\033[0m" << std::endl;
}

AMateria::AMateria(const AMateria &ref) {
	std::cout << "AMateria COPY constructor called" << std::endl;
	*this = ref;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

// --- Functions --- //
