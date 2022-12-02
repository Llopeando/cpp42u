/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 09:54:24 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/02 12:11:35 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	//Player creator
	ClapTrap	player1("ecamara");
	ClapTrap	player2("eperaita");
	//Player names
	std::string	player1name = "ecamara";
	std::string	player2name = "eperaita";
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
	player2.takeDamage(player2attDamage);
	player2.beRepaired(4);
	std::cout << std::endl;
	player1.attack(player2name);
	player2.takeDamage(player1attDamage);
	player2.beRepaired(2);
	std::cout << std::endl;
	player2.attack(player1name);
	player1.takeDamage(player2attDamage);
	player1.beRepaired(10);
	std::cout << std::endl;
	player2.attack(player1name);
	player1.takeDamage(player2attDamage);
	player1.beRepaired(10);
	return (0);
}
