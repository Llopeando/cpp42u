/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:52:00 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/08 20:06:31 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// --- Constructors and destructor --- //
FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attdamage = 30;
}

FragTrap::FragTrap(std::string fragname) : ClapTrap(fragname) {
	std::cout << "FragTrap name constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attdamage = 30;
	std::cout << "\033[1;36m[--- " << _name << " FragTrap has been created ---]\033[0m" << std::endl;
	std::cout << "\033[1;37mAvailable Hit Points -> \033[33m(" << _hitpoints << ")\033[0m" << std::endl;
	std::cout << "\033[1;37mAvailable Energy points -> \033[33m(" << _energypoints << ")\033[0m" << std::endl;
	std::cout << "\033[1;37mAvailable Attack Damage -> \033[33m(" << _attdamage << ")\033[0m\n" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

// --- Functions --- //
void FragTrap::highFivesGuys() {
	std::cout << "👏 \033[1;32mHey! Give me a high five! \033[4;34m(" << _name << " asked calmly)\033[0m" << std::endl;
}