/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:29:20 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/21 14:29:53 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	int	c;

	c = 0;
	while (N > 0)
	{
		Zombie *newZmb = new Zombie(name);
		c++;
		if (N <= c)
			return (newZmb);
	}
}
