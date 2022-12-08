/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:45:18 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/08 19:19:41 by ullorent         ###   ########.fr       */
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
		~ClapTrap();

		std::string getName() const;
		int	getHitEnergyAttPoints(int boo) const;
		void setAttDamage(int attdamage);

		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected: // Data accessible from the "child" class, in this case, 'ScavTrap' class
		std::string _name;
		int _hitpoints;
		int _energypoints;
		int _attdamage;
};

#endif