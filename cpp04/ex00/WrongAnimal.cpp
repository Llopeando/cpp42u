/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:46:00 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/15 13:47:39 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// --- Constructors and destructor --- //
WrongAnimal::WrongAnimal() : type("WrongMissingno") {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string animaltype) : type(animaltype) {
	std::cout << "WrongAnimal name constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

// --- Data getters --- //
std::string	WrongAnimal::getType() const {
	return (this->type);
}

// --- Functions --- //
void	WrongAnimal::makeSound() const {
	std::cout << "\033[1;31m🤐 " << type << " makes the sound of nothingness\033[0m" << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &ost, WrongAnimal const &rhs) {
	ost << rhs.getType();
	return (ost);
}
