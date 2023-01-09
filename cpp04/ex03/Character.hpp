/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:58:09 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/09 18:55:58 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(const std::string &name_ref);
		Character(const Character &ref);
		~Character();

		//ICharacter interface functions redefinition
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		std::string	name;

		AMateria	*inventory[4];
};

#endif
