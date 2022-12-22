/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:08:31 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/22 15:45:09 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &ref);
		virtual ~Cat();

		virtual void	makeSound() const;
		std::string		catIdeaGetter(int array_pos);
		void			catIdeaSetter(int array_pos, std::string idea);

		Cat &operator=(Cat const &rhs);
	private:
		Brain	*brain;
};
std::ostream &operator<<(std::ostream &ost, Animal const &rhs);

#endif