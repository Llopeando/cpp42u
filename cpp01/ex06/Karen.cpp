/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:43:25 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/26 15:12:36 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

//Constructor and destructor
Karen::Karen() { return ; }

Karen::~Karen() { return ; }

//Private Karen functions that tell things
void	Karen::debug(void) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I just love it! 💙\033[0m\n" << std::endl;
}

void	Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\033[0m\n" << std::endl;
}

void	Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. 😠" << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month.\033[0m\n" << std::endl;
}

void	Karen::error(void) {
	std::cout << "This is un🅰️ ccept🅰️ ble, I w🅰️ nt to speak to the m🅰️ n🅰️ ger now.\033[0m" << std::endl;
}

//Main Karen function that calls the private functions
void	Karen::karenFilter(std::string level) {
	int	n;

	n = 0;
	void(Karen::*func)() = NULL;
	
	std::string comment[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (n < 4 && level.compare(comment[n]))
		n++;
	switch(n)
	{
		case 0:
			std::cout << "\033[92;1m[ \033[92;1;4mDEBUG\033[0m \033[92;1m]" << std::endl;
			func = &Karen::debug;
			//We should call the member functions each time because it should change the value
			//as the cases continue; for example, if you type DEBUG, it saves DEBUG content into
			//the func pointer, but then, it continues to INFO, so it should save the INFO value.
			(this->*func)();
		case 1:
			std::cout << "\033[36;1m[ \033[36;1;4mINFO\033[0m \033[36;1m]" << std::endl;
			func = &Karen::info;
			(this->*func)();
		case 2:
			std::cout << "\033[33;1m[ \033[33;1;4mWARNING\033[0m \033[33;1m]" << std::endl;
			func = &Karen::warning;
			(this->*func)();
		case 3:
			std::cout << "\033[31;1m[ \033[31;1;4mERROR\033[0m \033[31;1m]" << std::endl;
			func = &Karen::error;
			(this->*func)();
			return;
		case 4:
			std::cout << "\033[97;1m[ Probably complaining about insignificant problems ]\033[0m" << std::endl;
			return ;
	}
}
