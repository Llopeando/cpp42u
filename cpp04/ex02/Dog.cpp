/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:05:12 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/22 16:03:27 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// --- Constructors and destructor --- //
Dog::Dog() : Animal("Dog") /*brain(new Brain())*/{
	std::cout << "\033[33mDog constructor called\033[0m" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &ref) : brain(new Brain()){
	std::cout << "\033[1;33mDog COPY constructor called (val(val2))\033[0m" << std::endl;
	*this = ref;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

// --- Functions --- //
void	Dog::makeSound() const {
	std::cout << "\033[1;33m🐕 " << this->type << " makes some guau guau\033[0m" << std::endl;
	return ;
}

std::string	Dog::dogIdeaGetter(int array_pos) {
	return (brain->getIdeas(array_pos));
}

void	Dog::dogIdeaSetter(int array_pos, std::string idea) {
	brain->setIdeas(array_pos, idea);
}

// --- Overload operator "assignation" --- //
Dog &Dog::operator=(Dog const &rhs) {
	std::cout << "\033[1;37mDog assignment operator called (=)\033[0m" << std::endl;
	type = rhs.getType();
	delete brain;
	brain = new Brain(*rhs.brain);
	return (*this);
}
