/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:26:25 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/23 09:45:12 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H
#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanA 
{
	public:
		HumanA(std::string str, Weapon &w_type);
		~HumanA();

		void	attack(void);
	private:
		std::string	_name;
		Weapon	&_w_type;
};

#endif