/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:45:18 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/01 17:57:16 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H
#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &raw);
		~ClapTrap();

		std::string getName() const;
		int	getHitEnergyAttPoints(int boo) const;

		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string _name;
		int _hitpoints;
		int _energypoints;
		int _attdamage;
};

#endif