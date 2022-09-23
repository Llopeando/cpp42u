/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:30:19 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/23 09:58:38 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//Constructor and destructor
HumanA::HumanA (std::string str, Weapon &w_type): _w_type(w_type) {
	_name = str;
}

HumanA::~HumanA () {}

//Attack function
void	HumanA::attack(void) {
	std::cout << this->_name << " attacks with his " << this->_w_type.getType() << std::endl;
	return ;
}
