/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:21:40 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/03 17:40:06 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// --- Constructors and destructor --- //
MateriaSource::MateriaSource() {
	std::cout << "MateriaSource constructor called" << std::endl;
	for (int c = 0; c < 4; c++)
	{
		std::cout << c << std::endl;
		inventory[c] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &ref) {
	std::cout << "MateriaSource COPY constructor called" << std::endl;
	*this = ref;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
}

// --- Functions --- //
void	MateriaSource::learnMateria(AMateria* src) {
	for (int c = 0; c < 4; c++)
	{
		if (inventory[c] == NULL)
			inventory[c] = src;
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type) {
	int c = 0;

	if (inventory[c]->getType().compare(type))
		return(inventory[c]->clone());
	else
		return (0);
}