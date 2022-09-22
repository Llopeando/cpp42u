/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:17:11 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/22 13:51:20 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	int	n;
	Zombie	*Zombies;

	n = 0;
	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n > 0)
		{
			Zombies = zombieHorde(n, "Zombie");
			delete[] Zombies; //We clear the memory here
		}
		else
		{
			std::cout << "[!] Check the number argument" << std::endl;
			return (1);
		}
	}
	else
	{
		std::cout << "[!] You should enter a number argument" << std::endl;
		return (1);
	}
	return (0);
}
