/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:17:25 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/21 14:19:00 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>

//Zombie class
class Zombie
{
	public:
		Zombie(std::string ZombieName);
		~Zombie();

		void	Announce(void);

	private:
		std::string	_ZombieName;
};

//Heap zombie creator without announcer
Zombie *newZombie (std::string name);
//Zombie horde creator based on N quantity
Zombie *zombieHorde(int N, std::string name);

#endif
