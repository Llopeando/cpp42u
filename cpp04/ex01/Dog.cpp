/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:05:12 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/19 17:27:58 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// --- Constructors and destructor --- //
Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
	Brain *brn = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

// --- Functions --- //
void	Dog::makeSound() const {
	std::cout << "\033[1;33m🐕 " << this->type << " makes some guau guau\033[0m" << std::endl;
	return ;
}
