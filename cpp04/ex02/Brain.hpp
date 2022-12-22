/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:12:33 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/21 19:14:22 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_
#include "Animal.hpp"
#include <string>
#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain &ref);
		~Brain();

		Brain	&operator=(const Brain &ref);

		std::string	getIdeas(int array_pos) const;
		void		setIdeas(int array_pos, std::string idea);
	private:
		std::string ideas[100];
};

#endif