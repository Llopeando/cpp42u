/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:45:16 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/02 12:13:37 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// --- Constructors and destructor --- //
ClapTrap::ClapTrap() : _name("Missingno"), _hitpoints(10), _energypoints(10), _attdamage(0) {
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energypoints(10), _attdamage(0){
	std::cout << "Name constructor called" << std::endl;
	std::cout << "\033[1;32m[--- " << _name << " has been created ---]\033[0m" << std::endl;
	std::cout << "\033[1;37mAvailable Hit Points -> \033[33m(" << _hitpoints << ")\033[0m" << std::endl;
	std::cout << "\033[1;37mAvailable Energy points -> \033[33m(" << _energypoints << ")\033[0m" << std::endl;
	std::cout << "\033[1;37mAvailable Attack Damage -> \033[33m(" << _attdamage << ")\033[0m\n" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &raw) {
	std::cout << "Copy constructor called" << std::endl;
	_name = raw.getName();
	_hitpoints = raw.getHitEnergyAttPoints(0);
	_energypoints = raw.getHitEnergyAttPoints(1);
	_attdamage = raw.getHitEnergyAttPoints(2);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

// --- Getters --- //
std::string ClapTrap::getName() const {
	return (this->_name);
}
int	ClapTrap::getHitEnergyAttPoints(int boo) const {
	if (boo == 0)
		return (this->_hitpoints);
	if (boo == 1)
		return (this->_energypoints);
	if (boo == 2)
		return (this->_attdamage);
	else
		return (1);
}

void ClapTrap::setAttDamage(int attdamage) {
	_attdamage = attdamage;
	return ;
}

// --- Main functions --- //
void ClapTrap::attack(std::string const &target) {
	std::cout << "🗡️  \033[1;34mClapTrap " << _name << " attacks " << target << " causing " << _attdamage << " points of damage!" << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if ((int)amount < 0)
	{
		std::cout << "\033[1;31mERROR 1 [!]\033[0m\n\033[1;37mIt is not possible to take negative points of damage! Check your main args. Exiting...\033[0m" << std::endl;
		exit (1);
	}
	if (amount > (unsigned int)_hitpoints)
		amount = _hitpoints;
	_hitpoints -= amount;
	std::cout << "😵 \033[1;37mClapTrap " << _name << " received " << amount << " points of damage!\033[0m \033[4;31m(" << _hitpoints << " hit points left)\033[0m" << std::endl;
	if (_hitpoints <= 0 && _energypoints <= 0)
	{
		std::cout << "💀 \033[1;31m" << _name << " has died!\033[0m" << std::endl;
		_hitpoints = 0;
	}
	else if (_hitpoints <= 0 && _energypoints > 0)
	{
		std::cout << "💀 \033[1;31m" << _name << " has died but \033[4;32mhe can still regenerate\033[1;31m!\033[0m" << std::endl;
		_hitpoints = 0;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if ((int)amount < 0)
	{
		std::cout << "\033[1;31mERROR 2 [!]\033[0m\n\033[1;37mIt is not possible to repair a negative energy points value! Check your main args. Exiting...\033[0m" << std::endl;
		exit (2);
	}
	if (getHitEnergyAttPoints(1) < (int)amount)
		std::cout << "❌ \033[1;37m" << _name << " could not be regenerated as it does not have sufficient energy points!\033[0m" << std::endl;
	else
	{
		_energypoints -= amount;
		_hitpoints += amount;
		std::cout << "🧡 \033[1;37mClapTrap " << _name << " repaired " << amount << " energy points!\033[0m \033[4;32m(" << _energypoints << " energy points left)\033[0m / \033[4;31m(" << _hitpoints << ")\033[0m" << std::endl;
	}
	return ;
}
