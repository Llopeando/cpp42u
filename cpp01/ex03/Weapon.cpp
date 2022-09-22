/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:07:11 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/22 14:22:25 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//Constructor and destructor
Weapon::Weapon (std::string type) {}

Weapon::~Weapon () {}

//String GET method
std::string const	&Weapon::getType(void) const {
	return (this->_type);
}

//String SET method
void	Weapon::setType(std::string type) {
	this->_type = type;
	return ;
}