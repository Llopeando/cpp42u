/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:21:40 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/09 18:18:57 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// --- Constructors and destructor --- //
MateriaSource::MateriaSource() {
	//std::cout << "MateriaSource constructor called" << std::endl;
	for (int c = 0; c < 4; c++)
		inventory[c] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &ref) {
	//std::cout << "MateriaSource COPY constructor called" << std::endl;
	*this = ref;
}

MateriaSource::~MateriaSource() {
	//std::cout << "MateriaSource destructor called" << std::endl;
	for	(int c = 0; c < 4; c++)
	{
		if (inventory[c] != NULL)
			delete inventory[c];
	}
}

// --- Functions --- //
void	MateriaSource::learnMateria(AMateria* src) {
	for (int c = 0; c < 4; c++)
	{
		if (inventory[c] == NULL)
		{
			inventory[c] = src;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type) {
	for (int c = 0; c < 4; c++)
	{
		if (inventory[c] && !inventory[c]->getType().compare(type))
			return(inventory[c]->clone());
	}
	return (0); //If the type is unknown, returns NULL and do not copies the material into the inventory
}