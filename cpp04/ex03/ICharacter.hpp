/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:27:10 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/22 18:40:14 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP_
#define ICHARACTER_HPP_
#include "AMateria.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter() {}

		virtual std::string const & getName() const = 0;

		//virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		//virtual void use(int idx, ICharacter& target) = 0;
};

#endif