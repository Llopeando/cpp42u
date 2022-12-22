/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:26:59 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/22 16:39:27 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	// The next line is not ok, because now the Animal class is abstract, so you cannot instantiate it
	// Animal a; --> This will throw you an error whenever you try to compile it

	//Deep copy of Cat
	std::cout << "\n\033[1;37m-> First cat constructor <-\033[0m" << std::endl;
	Cat a;
	std::cout << "\n\033[1;37m-> Copy cat constructor <-\033[0m" << std::endl;
	Cat b(a);
	std::cout << std::endl;

	std::cout << "🧠 [A Cat Idea Nº1] " << a.catIdeaGetter(1) << std::endl;
	std::cout << "🧠 [B Cat Idea Nº1] " << b.catIdeaGetter(1) << "\n" << std::endl;
	
	a.catIdeaSetter(1, "Hi, im Cat A");
	b = a;

	std::cout << "\n🧠 [A Cat Idea Nº1] " << a.catIdeaGetter(1) << std::endl;
	std::cout << "🧠 [B Cat Idea Nº1] " << b.catIdeaGetter(1) << std::endl;
	std::cout << std::endl;
	
	return (0);
}