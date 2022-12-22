/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:12:31 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/22 15:56:15 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// --- Constructors and destructor --- //
Brain::Brain() {
	std::cout << "\033[31mBrain constructor called\033[0m" << std::endl;
	for (int c = 0; c < 100; c++)
		ideas[c] = "Im a Brain, I want some 42 thingies";
}

Brain::Brain(const Brain &ref) {
	std::cout << "Brain COPY constructor called" << std::endl;
	*this = ref;
}

Brain::~Brain() {
	std::cout << "\033[31mBrain destructor called\033[0m" << std::endl;
}

// --- Idea getter and setter --- //
std::string	Brain::getIdeas(int array_pos) const {
	return (ideas[array_pos]);
}

void	Brain::setIdeas(int array_pos, std::string idea) {
	ideas[array_pos] = idea;
}

// --- Operator overload "assignation" --- //
Brain	&Brain::operator=(const Brain &ref) {
	for (int c = 0; c < 100; c++)
		ideas[c] = ref.ideas[c];
	return (*this);
}
