/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:08:52 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/19 17:28:04 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// --- Constructors and destructor --- //
Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	Brain *brn = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

// --- Functions --- //
void	Cat::makeSound() const {
	std::cout << "\033[1;32m🐈 " << this->type << " makes some purRrRrRring\033[0m" << std::endl;
	return ;
}
