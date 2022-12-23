/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:39:12 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/23 13:41:14 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int	main() {
	const	AMateria* cure = new Cure();
	const	AMateria* ice = new Ice();
	std::cout << std::endl;
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	ICharacter* me = new Character("ecamara");

	// AMateria* tmp;

	// tmp = src->createMateria("ice");
	// me->equip(tmp);

	// tmp = src->createMateria("cure");
	// me->equip(tmp);

	ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);

	// delete bob;
	// delete me;
	// delete src;
	delete cure;
	delete ice;
	delete me;
	delete bob;
	return (0);
}
