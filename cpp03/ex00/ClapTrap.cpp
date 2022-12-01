/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:45:16 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/01 17:57:43 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// --- Constructors and destructor --- //
ClapTrap::ClapTrap() : _name("Missingno"), _hitpoints(10), _energypoints(10), _attdamage(0) {
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energypoints(10), _attdamage(0){
	std::cout << "Name constructor called" << std::endl;
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
}

// --- Main functions --- //
void ClapTrap::attack(std::string const &target) {
	std::cout << "ClapTrap " << _name << " attacks " << target << "causing " << _attdamage << " points of damage!" << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount < 0)
	{
		std::cout << "[!] It is not possible to take " << amount << " points of damage!";
		return ;
	}
	amount = _hitpoints;
	std::cout << "ClapTrap " << _name << " received " << amount << " points of damage!" << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " repaired " << amount << " energy points!" << std::endl;
	return ;
}
