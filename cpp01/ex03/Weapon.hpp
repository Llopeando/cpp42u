/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:07:21 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/22 14:33:50 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon();

		std::string	const & getType(void) const;
		void	setType(std::string type);
	private:
		std::string	_type;
};

#endif