/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:39:12 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/09 18:51:28 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int	main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice()); //Here we create the materia and save it in memory so we can copy it later
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice"); //Here we create the Materia and equip the Character with the Materia
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	ICharacter* ecamara = new Character("ecamara");
	//me->use(4, *ecamara); //This will show you an error as the fourth (fifth) Materia does not exist
	me->use(0, *ecamara);
	me->use(1, *ecamara);
	//me->use(3, *ecamara); //This will show you an error as the third (fourth) Materia does not exist

	delete ecamara;
	delete me;
	delete src;
	return (0);
}
