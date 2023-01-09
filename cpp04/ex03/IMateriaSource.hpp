/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:16:21 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/09 18:10:23 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP_
#define IMATERIASOURCE_HPP_
#include "AMateria.hpp"

//This is an Interface, which is normally filled with private and pure methods (this is called an abstract class)
//This functions should be defined by the inheritance classes.
class IMateriaSource
{
	public:
		virtual	~IMateriaSource() {};
		virtual	void	learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const &type) = 0;
};

#endif