/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:58:39 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/03 16:45:35 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// --- Constructors and destructor --- //
Character::Character() {
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const std::string &name_ref) {
	std::cout << "Character NAME constructor called" << std::endl;
	name = name_ref;
	for (int c = 0; c < 4; c++)
	{
		std::cout << c << std::endl;
		inventory[c] = NULL;
	}
}

Character::Character(const Character &ref) {
	std::cout << "Character COPY constructor called" << std::endl;
	*this = ref;
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
}

// --- Functions --- //
std::string	const &Character::getName() const {
	return (this->name);
}

void	Character::equip(AMateria *m) {
	for (int c = 0; c < 4; c++)
	{
		if (inventory[c] == NULL)
			inventory[c] = m;
	}
}

void	Character::unequip(int	idx) {
	if (idx < 4)
		inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {
	inventory[idx]->use(target);
}
