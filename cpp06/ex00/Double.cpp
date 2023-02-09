/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:54:27 by ullorent          #+#    #+#             */
/*   Updated: 2023/02/09 17:08:46 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Double.hpp"

// --- Constructors and destructor --- //
Double::Double() {
	//std::cout << "Double constructor called" << std::endl;
}

Double::Double(std::string &ref) {
	pre = 1;
	str = ref;
}

Double::~Double() {
	//std::cout << "Double destructor called" << std::endl;
}

// --- Functions --- //
void	Double::DoubleNumber() {
	if (num >= 32 && num <= 126)
		std::cout << "\033[1;37mchar: \033[0m'" << static_cast<char>(num) << "'" << std::endl;
	else
		std::cout << "\033[1;37mchar: \033[0mNon displayable" << std::endl;
	if (num <= 2147483647 && num >= -2147483648)
		std::cout << "\033[1;37mint: \033[0m" << static_cast<int>(num) << std::endl;
	else
		std::cout << "\033[1;37mint: \033[0mimpossible" << std::endl;
	std::cout.precision(pre);
	std::cout << "\033[1;37mfloat: \033[0m" << std::fixed << static_cast<float>(num) << "f" << std::endl;
	std::cout << "\033[1;37mdouble: \033[0m" << std::fixed << num << std::endl;
}

void	Double::checkException() {
	std::cout << "\033[1;37mchar: \033[0mimpossible" << std::endl;
	std::cout << "\033[1;37mint: \033[0mimpossible" << std::endl;
	if (str == "-inf" || str == "+inf" || str == "inf" ||str == "nan")
	{
		std::cout << "\033[1;37mfloat: \033[0m" << str << "f" << std::endl;
		std::cout << "\033[1;37mdouble: \033[0m" << str << std::endl;
	}
	else {
		std::cout << "\033[1;37mfloat: \033[0m" << str << std::endl;
		std::cout << "\033[1;37mdouble: \033[0m" << str.substr(0, str.length() - 1) << std::endl;
	}
}

void	Double::checkLength() {
	try{
		num = std::stod(str);
		if (str.find('.', 0) > str.size()) //Here we check if there is not a point in the number
			pre = 1;
		else {
			pre = str.size() - str.find('.', 0) - 1;
			if (str.find('f') <= str.size())
				pre -= 1;
		}
	}
	catch(std::exception &e)
	{
		std::cout << "\033[1;37mchar: \033[0m'" << str << "'" << std::endl;
	}
	
}
