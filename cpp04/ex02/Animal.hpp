/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:02:20 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/22 16:33:00 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_
#include <iostream>
#include <string>

// Base class for all the program/exercise
class Animal
{
	public:
		Animal();
		Animal(std::string animaltype);
		Animal(const Animal &ref);
		virtual ~Animal(); // With virtual we priorize the use of the subclass data instead of the base class data

		virtual void	makeSound() const = 0;

		std::string	getType() const;

		Animal &operator=(const Animal &ref);
	protected:
		std::string	type;
};
std::ostream &operator<<(std::ostream &ost, Animal const &rhs);

#endif