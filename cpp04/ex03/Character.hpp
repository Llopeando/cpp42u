/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:58:09 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/23 13:42:53 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(const std::string &name_ref);
		Character(const Character &ref);
		virtual ~Character();

		// ICharacter interface functions redefinition
		std::string const & getName() const;
		void equip(AMateria* m);
		// void unequip(int idx);
		// void use(int idx, ICharacter& target);
	private:
		std::string	name;

		AMateria	*inventory[4];
};

#endif
