/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:05:21 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/21 18:56:25 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &ref);
		virtual ~Dog();

		virtual void	makeSound() const;
		std::string		dogIdeaGetter(int array_pos);
		void			dogIdeaSetter(int array_pos, std::string idea);

		Dog &operator=(const Dog &ref);
	private:
		Brain	*brain;
};

#endif