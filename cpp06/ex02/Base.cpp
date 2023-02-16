/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:23:38 by ullorent          #+#    #+#             */
/*   Updated: 2023/02/16 18:48:41 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

// --- Destructor --- //
Base::~Base() {
	// std::cout << "Base destructor called" << std::endl;
}

// --- Functions --- //
Base*	generate() {
	srand(time(NULL));
	int	randvalue = rand() % 3;
	std::cout << randvalue << std::endl;

	if (randvalue == 0)
		return (new A());
	if (randvalue == 1)
		return (new B());
	return (new C());
}

void	identify(Base *p) {
	std::cout << p << std::endl;
	return ;
}

void	identify(Base &p) {
	std::cout << p << std::endl;
	return ;
}
