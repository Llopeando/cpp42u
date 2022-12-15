/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:47:47 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/15 13:52:44 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// --- Constructors and destructor --- //
WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "Cat constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Cat destructor called" << std::endl;
}

// --- Functions --- //
void	WrongCat::makeSound() const {
	std::cout << "\033[1;32m🐈 " << this->type << " makes some purRrRrRring\033[0m" << std::endl;
	return ;
}
