/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:09:18 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/21 13:48:04 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heapZombie = newZombie("Zombie1H");
	heapZombie->Announce();
	delete heapZombie; //We clear the memory here
	randomChump("Zombi2S");
	return (0);
}
