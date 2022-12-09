/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:10:35 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/09 13:57:52 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// --- Constructors and destructor --- //
DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energypoints = ScavTrap::_energypoints;
	this->_attdamage = FragTrap::_attdamage;
	this->_name = "Missingno";
	ClapTrap::_name = _name + "_clap_name";
}

DiamondTrap::DiamondTrap(std::string diamondname) : ClapTrap(diamondname + "_clap_name"), FragTrap(diamondname), ScavTrap(diamondname) {
	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energypoints = ScavTrap::_energypoints;
	this->_attdamage = FragTrap::_attdamage;
	this->_name = diamondname;
	std::cout << "\033[1;33m[--- " << _name << " DiamondTrap has been created ---]\033[0m" << std::endl;
	std::cout << "\033[1;37mAvailable Hit Points -> \033[33m(" << _hitpoints << ")\033[0m" << std::endl;
	std::cout << "\033[1;37mAvailable Energy points -> \033[33m(" << _energypoints << ")\033[0m" << std::endl;
	std::cout << "\033[1;37mAvailable Attack Damage -> \033[33m(" << _attdamage << ")\033[0m" << std::endl;
	std::cout << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

// --- Functions --- //
void	DiamondTrap::whoAmI() {
	std::cout << "ℹ️  \033[1;37mThe DiamondTrap name is \033[1;33m" << _name << " \033[1;37mand the ClapTrap name is \033[1;32m" << ClapTrap::_name << "\033[0m" << std::endl;
}
