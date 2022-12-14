/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:05:21 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/14 17:16:06 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
	private:
		std::string type;
};

#endif