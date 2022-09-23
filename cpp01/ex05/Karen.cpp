/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:41:14 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/23 12:13:09 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

//Constructor and destructor
Karen::Karen() { return ; }

Karen::~Karen() { return ; }

//Private Karen functions that tells things
void	Karen::debug(void) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

//Main Karen function that calls the private functions
void	Karen::complain(std::string level) {
	std::string comment[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	num;

	num = atoi(level.c_str());
	switch(num)
	{
		case 0:
			func = &Karen::debug;
			break;
		case 1:
			func = &Karen::info;
			break;
		case 2:
			func = &Karen::warning;
			break;
		case 3:
			func = &Karen::error;
			break;
		default:
			std::cout << "[!] Please, specify a number between 0 and 3" << std::endl;
			break;
	}
}
