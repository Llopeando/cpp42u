/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:22:47 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/23 09:56:55 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string str);
		~HumanB();

		void	setWeapon(Weapon &w_type_setter);
		void	attack(void);
	private:
		std::string	_name;
		Weapon		*_w_type_setter;
};

#endif