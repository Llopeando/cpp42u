/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:02:18 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/21 16:44:46 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// --- Constructors and destructor --- //
Animal::Animal() : type("Missingno") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string animaltype) : type(animaltype) {
	std::cout << "Animal name constructor called" << std::endl;
}

Animal::Animal(const Animal &ref) {
	std::cout << "Animal COPY constructor called" << std::endl;
	*this = ref;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

// --- Data getters --- //
std::string	Animal::getType() const {
	return (this->type);
}

// --- Functions --- //
void	Animal::makeSound() const {
	std::cout << "\033[1;31m🤐 " << type << " makes the sound of nothingness\033[0m" << std::endl;
	return ;
}

// --- Overload operators --- //
std::ostream &operator<<(std::ostream &ost, Animal const &rhs) {
	ost << rhs.getType();
	return (ost);
}

Animal	&Animal::operator=(const Animal &ref) {
	if (this != &ref)
		type = ref.getType();
	return (*this);
}
