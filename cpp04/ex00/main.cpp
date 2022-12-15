/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:14:27 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/15 13:59:40 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main() {
	// Animals
	std::cout << "\033[1;32m[--- Animals ---]\033[0m" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\n\033[1;37mℹ️  Animal type: " << meta->getType() << "\033[0m" << std::endl;
	std::cout << "\033[1;37mℹ️  Animal type: " << dog->getType() << "\033[0m" << std::endl;
	std::cout << "\033[1;37mℹ️  Animal type: " << cat->getType() << "\033[0m\n" << std::endl;
	meta->makeSound();
	dog->makeSound(); //will output the cat sound!
	cat->makeSound();
	std::cout << std::endl;

	// Wrong animals
	std::cout << "\033[1;31m[--- Wrong Animals ---]\033[0m" << std::endl;
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << "\n\033[1;37mℹ️  Wrong Animal type: " << wrongmeta->getType() << "\033[0m" << std::endl;
	std::cout << "\033[1;37mℹ️  Wrong Animal type: " << wrongcat->getType() << "\033[0m\n" << std::endl;
	wrongmeta->makeSound(); 
	wrongcat->makeSound();

	// Memory cleaning
	delete meta;
	delete dog;
	delete cat;
	
	delete wrongmeta;
	delete wrongcat;

	return (0);
}
