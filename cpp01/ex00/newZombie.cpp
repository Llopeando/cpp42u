/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:28:23 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/21 14:21:28 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Heap zombie (program memory zombie)
Zombie *newZombie (std::string name) {
	Zombie *newZmb = new Zombie(name);
	return (newZmb);
}
