/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:53:54 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/21 13:40:09 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Constructor and destructor
Zombie::Zombie (std::string ZombieName) {
	_ZombieName = ZombieName;
}

Zombie::~Zombie () {
	std::cout << _ZombieName << " has been destructed" << std::endl;
};

//Main Zombie name function
void	Zombie::Announce(void) {
	std::cout << this->_ZombieName << " BraiiiiiiinnnzzzZ..." << std::endl;
}