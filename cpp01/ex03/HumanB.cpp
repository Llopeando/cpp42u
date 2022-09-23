/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:24:40 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/23 09:58:32 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//Constructor and destructor
HumanB::HumanB (std::string str) {
	_name = str;
}

HumanB::~HumanB () {}

//Set weapon function
void	HumanB::setWeapon(Weapon &w_type_setter) {
	this->_w_type_setter = &w_type_setter;
	return ;
}

//Attack funcction
void	HumanB::attack(void) {
	std::cout << this->_name << " attacks with his " << this->_w_type_setter->getType() << std::endl;
	return ;
}
