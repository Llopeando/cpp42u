/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:02:20 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/14 17:05:02 by ullorent         ###   ########.fr       */
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
		~Animal();
	protected:
		std::string	type;
};

#endif