/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:22:32 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/03 17:40:22 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP_
#define MATERIASOURCE_HPP_
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &ref);
		virtual	~MateriaSource();

		// IMateriaSource interface functions redefinition
		void	learnMateria(AMateria* src);
		AMateria*	createMateria(std::string const &type);
	private:
		AMateria* inventory[4];
};

#endif