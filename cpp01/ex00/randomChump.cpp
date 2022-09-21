/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:34:26 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/21 13:44:57 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Stack zombie (computer memory zombie)
void randomChump(std::string name) {
	Zombie	stackZombie = Zombie(name);
	stackZombie.Announce();
}
