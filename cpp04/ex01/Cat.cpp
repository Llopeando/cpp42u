/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:08:52 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/21 19:38:59 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// --- Constructors and destructor --- //
Cat::Cat() : Animal("Cat") {
	std::cout << "\033[32mCat constructor called\033[0m" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &ref) : Animal("Cat"), brain(new Brain()){
	std::cout << "Cat COPY constructor called" << std::endl;
	*this = ref;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

// --- Functions --- //
void	Cat::makeSound() const {
	std::cout << "\033[1;32m🐈 " << this->type << " makes some purRrRrRring\033[0m" << std::endl;
	return ;
}

std::string	Cat::dogIdeaGetter(int array_pos) {
	return (brain->getIdeas(array_pos));
}

void	Cat::dogIdeaSetter(int array_pos, std::string idea) {
	brain->setIdeas(array_pos, idea);
}

// --- Overload operator "assignation" --- //
Cat &Cat::operator=(Cat const &rhs) {
	std::cout << "\033[1;37mCat assignment operator called\033[0m" << std::endl;
	type = rhs.getType();
	return (*this);
}
