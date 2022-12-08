/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:49:46 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/08 19:46:57 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// --- Constructors and destructor --- //
ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attdamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attdamage = 20;
	std::cout << "\033[1;35m[--- " << _name << " ScavTrap has been created ---]\033[0m" << std::endl;
	std::cout << "\033[1;37mAvailable Hit Points -> \033[33m(" << _hitpoints << ")\033[0m" << std::endl;
	std::cout << "\033[1;37mAvailable Energy points -> \033[33m(" << _energypoints << ")\033[0m" << std::endl;
	std::cout << "\033[1;37mAvailable Attack Damage -> \033[33m(" << _attdamage << ")\033[0m\n" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

// --- Functions --- //
void ScavTrap::guardGate() {
	std::cout << "⛓️  \033[1;31mScavTrap " << _name << " entered in GateKeeper mode!\033[0m" << std::endl;
	return ;
}
