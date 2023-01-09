/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:58:39 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/09 19:13:11 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// --- Constructors and destructor --- //
Character::Character() {
	//std::cout << "Character constructor called" << std::endl;
}

Character::Character(const std::string &name_ref) {
	name = name_ref;
	for (int c = 0; c < 4; c++)
		inventory[c] = NULL;
	//std::cout << "Character NAME constructor called" << std::endl;
}

Character::Character(const Character &ref) {
	*this = ref;
	//std::cout << "Character COPY constructor called" << std::endl;
}

Character::~Character() {
	for (int c = 0; c < 4; c++)
	{
		if (inventory[c] != NULL)
			delete inventory[c];
	}
	//std::cout << "Character destructor called" << std::endl;
}

// --- Functions --- //
std::string	const &Character::getName() const {
	return (this->name);
}

void	Character::equip(AMateria *m) {
	for (int c = 0; c < 4; c++)
	{
		if (inventory[c] == NULL)
		{
			inventory[c] = m;
			break;
		}
	}
}

void	Character::unequip(int	idx) {
	if (idx < 3)
	{
		inventory[idx] = NULL;
		std::cout << "🗜️ \033[1;33m Materia \033[1;32m" << idx << " \033[1;33mhas been unequiped from Character \033[1;32m" << this->name << "\033[0m" << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target) {
	if ((idx > 3 || idx < 0) || inventory[idx] == NULL)
	{
		if (idx > 3 || idx < 0)
			std::cout << "❌ \033[1;31mThe index value \033[37m" << idx << " \033[31mits out of bound\033[0m" << std::endl;
		else
			std::cout << "❌ \033[1;31mThe index value \033[37m" << idx << " \033[31mits not available in the inventory. It has been unequiped?\033[0m" << std::endl;
		return ;
	}
	inventory[idx]->use(target);
}
