/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 09:54:24 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/08 19:41:04 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	//Player creator
	ClapTrap	player1("ecamara");
	ClapTrap	player2("eperaita");
	ScavTrap	player3("zcanales");
	//Player names
	std::string	player1name = "ecamara";
	std::string	player2name = "eperaita";
	std::string	player3name = "zcanales";
	//Player "strength"
	int			player1attDamage = 5;
	int			player2attDamage = 10;

	//Player "strength" setter
	player1.setAttDamage(player1attDamage);
	player2.setAttDamage(player2attDamage);

	//The battle
	player1.attack(player2name);
	player2.takeDamage(player1attDamage);
	player2.beRepaired(4);
	std::cout << std::endl;
	player2.attack(player1name);
	player1.takeDamage(player2attDamage);
	player1.beRepaired(4);
	std::cout << std::endl;
	player2.attack(player3name);
	player3.takeDamage(player2attDamage);
	player3.beRepaired(4);
	player3.guardGate();
	return (0);
}
