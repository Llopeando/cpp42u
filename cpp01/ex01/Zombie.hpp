/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:17:25 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/22 13:14:06 by ullorent         ###   ########.fr       */
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
		Zombie();
		Zombie(std::string ZombieName);
		~Zombie();

		void	Announce(void);

		//Zombie name setter
		void	zombie_name_setter(int c, std::string ZombieName);

	private:
		std::string	_ZombieName;
		int			zmbId;
};

//Zombie horde creator based on N quantity
Zombie *zombieHorde(int N, std::string name);

#endif
