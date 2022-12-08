/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 09:54:24 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/08 20:05:43 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	//Player creator
	ClapTrap	player1("ecamara");
	ClapTrap	player2("eperaita");
	ScavTrap	player3("zcanales");
	FragTrap	player4("inunez-g");
	//Player names
	std::string	player1name = "ecamara";
	std::string	player2name = "eperaita";
	std::string	player3name = "zcanales";
	std::string	player4name = "inunez-g";
	//Player "strength"
	int			player1attDamage = 5;
	int			player2attDamage = 10;
	int			player3attDamage = 7;
	int			player4attDamage = 8;

	//Player "strength" setter
	player1.setAttDamage(player1attDamage);
	player2.setAttDamage(player2attDamage);
	player4.setAttDamage(player4attDamage);

	//The battle
	player4.attack(player1name);
	player1.takeDamage(player4attDamage);
	player1.beRepaired(4);
	std::cout << std::endl;
	player3.attack(player4name);
	player4.takeDamage(player3attDamage);
	player4.beRepaired(7);
	player3.guardGate();
	std::cout << std::endl;
	player4.highFivesGuys();
	return (0);
}
