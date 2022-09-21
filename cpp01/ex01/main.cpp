/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:17:11 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/21 14:28:34 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	int	n;

	n = 0;
	if (argc == 2)
	{
		n = atoi(argv[1]);
		Zombie	*heapZombie = zombieHorde(n, "Zombie1H");
		heapZombie->Announce();
		delete heapZombie; //We clear the memory here
	}
	return (0);
}
