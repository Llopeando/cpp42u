/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:19:04 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/22 13:30:26 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Constructor and destructor
Zombie::Zombie () {
	zmbId = 0;
}

Zombie::Zombie (std::string ZombieName) {
	_ZombieName = ZombieName;
}

Zombie::~Zombie () {
	std::cout << _ZombieName << "(" << zmbId << ") has been destructed" << std::endl;
};

//Main Zombie name announce function
void	Zombie::Announce(void) {
	std::cout << this->_ZombieName << "(" << zmbId << ") BraiiiiiiinnnzzzZ..." << std::endl;
}

//Set Zombie name for struct
void	Zombie::zombie_name_setter(int c, std::string ZombieName) {
	zmbId = c;
	this->_ZombieName = ZombieName;
}
