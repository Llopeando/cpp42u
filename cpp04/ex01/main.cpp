/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:18:49 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/21 19:53:24 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	Animal	*ani_array[4];

	//Animal array filler
	std::cout << "\033[1;32m[--- Animal array filter ---]\033[0m" << std::endl;
	for (int c = 0; c < 4; c++)
	{
		if (c % 2)
			ani_array[c] = new Cat();
		else
			ani_array[c] = new Dog();
		ani_array[c]->makeSound();
	}
	std::cout << std::endl;

	//Array destructor and cleaner
	for (int c = 0; c < 4; c++)
		delete	ani_array[c];
	std::cout << std::endl;

	//Deep copy of Dog
	// -> Deep copies are copies which contains everything about the base class
	std::cout << "\033[1;33m[--- Dog deep copy ---]\033[0m" << std::endl;
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\n\033[1;37m-> First dog constructor <-\033[0m" << std::endl;
	dogA();
	std::cout << "\n\033[1;37m-> Copy dog constructor <-\033[0m" << std::endl;
	dogB(dogA);
	std::cout << std::endl;

	return (0);
}
