/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:46:29 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/15 13:47:11 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP_
#define WRONG_ANIMAL_HPP_
#include <iostream>
#include <string>

// Base class for all the program/exercise
class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string animaltype);
		~WrongAnimal();

		void	makeSound() const;

		std::string	getType() const;
	protected:
		std::string	type;
};
std::ostream &operator<<(std::ostream &ost, WrongAnimal const &rhs);

#endif