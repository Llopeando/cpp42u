/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:29:20 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/22 13:31:08 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	int	c;

	c = 0;
	Zombie *Zombies = new Zombie[N];
	while (N > c)
	{
		Zombies[c].zombie_name_setter(c, name);
		Zombies[c].Announce();
		c++;
	}
	return (Zombies);
}
