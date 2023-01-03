/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:16:21 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/03 17:42:13 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP_
#define IMATERIASOURCE_HPP_
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual	~IMateriaSource() {};
		virtual	void	learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const &type) = 0;
};

#endif