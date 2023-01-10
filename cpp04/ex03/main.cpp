/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:39:12 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/10 12:37:49 by ullorent         ###   ########.fr       */
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

	ICharacter* ullorent = new Character("ullorent");

	AMateria* tmp;
	tmp = src->createMateria("ice"); //Here we create the Materia and equip the Character with the Materia
	ullorent->equip(tmp);
	tmp = src->createMateria("cure");
	ullorent->equip(tmp);
	tmp = src->createMateria("ice");
	ullorent->equip(tmp);

	ICharacter* ecamara = new Character("ecamara");
	//me->use(4, *ecamara); //This will show you an error as the fourth (fifth) Materia does not exist
	ullorent->use(0, *ecamara);
	ullorent->use(1, *ecamara);
	//me->use(3, *ecamara); //This will show you an error as the third (fourth) Materia does not exist

	ullorent->unequip(1);
	ullorent->use(1, *ecamara); //This will give an error as the second (which is number 1) Materia does not exist
	tmp = src->createMateria("ice"); //Here we reasign the Materia to the first character
	ullorent->equip(tmp);
	ullorent->use(1, *ecamara);

	tmp = src->createMateria("ice"); //Here we create the Materia and equip the Character with the Materia
	ecamara->equip(tmp);
	ecamara->use(0, *ullorent);

	delete ecamara;
	delete ullorent;
	delete src;
	return (0);
}
