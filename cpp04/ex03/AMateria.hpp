/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:01:04 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/09 18:57:08 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP_
#define AMATERIA_HPP_
#include <iostream>

class ICharacter;
class AMateria
{
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &ref);
		virtual ~AMateria(); // With virtual we priorize the use of the subclass data instead of the base class data


		virtual AMateria* clone() const = 0; //This is a class that should be defined by inheritance classes. It cannot be defined by the AMateria
		virtual void use(ICharacter& target);
		std::string const & getType() const; //Returns the materia type
	protected:
		std::string	type;
};

#endif