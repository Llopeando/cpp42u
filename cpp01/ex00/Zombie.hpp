/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:48:59 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/21 13:59:26 by ullorent         ###   ########.fr       */
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
//Stack zombie creator and announcer
void randomChump(std::string name);

#endif
