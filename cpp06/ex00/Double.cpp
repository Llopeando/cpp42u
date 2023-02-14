/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:54:27 by ullorent          #+#    #+#             */
/*   Updated: 2023/02/14 16:14:21 by ullorent         ###   ########.fr       */
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
	isStr = false;
	isFloat = false;
}

Double::~Double() {
	//std::cout << "Double destructor called" << std::endl;
}

// --- Functions --- //
bool	Double::checkIsNumber(std::string str) {
	for (size_t c = 0; c < str.length(); c++) {
		if (!isdigit(str[c])) {
			return true;
			break;
		}
	}
	return false;
}

void	Double::DoubleNumber() {
	// if (checkIsNumber(str) == true && isStr == false && isFloat == false) {
	// 	std::cout << "❌ \033[1;31mInvalid arguments! You need to specify a char (with 'CHAR'), int, float or a double value!\033[0m" << std::endl;
	// 	return ;
	// }
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
	if (str == "inf" || str == "inff")
		std::cout << "❌ \033[1;31mInvalid argument! You need to specify a char (with 'CHAR'), int, float or a double value!\033[0m" << std::endl;
	else {
		std::cout << "\033[1;37mchar: \033[0mimpossible" << std::endl;
		std::cout << "\033[1;37mint: \033[0mimpossible" << std::endl;
		if (str == "-inf" || str == "+inf" ||str == "nan")
		{
			std::cout << "\033[1;37mfloat: \033[0m" << str << "f" << std::endl;
			std::cout << "\033[1;37mdouble: \033[0m" << str << std::endl;
		}
		else {
			std::cout << "\033[1;37mfloat: \033[0m" << str << std::endl;
			std::cout << "\033[1;37mdouble: \033[0m" << str.substr(0, str.length() - 1) << std::endl;
		}
	}
}

void	Double::checkLength() {
	try{
		if (str.find('.', 0) > str.size()) //Here we check if there is not a point in the number
			pre = 1;
		else {
			pre = str.size() - str.find('.', 0) - 1;
			if (str.find('f') <= str.size())
				pre -= 1;
			isFloat = true;
		}
		num = std::stod(str);
	}
	catch(std::exception &e)
	{
		if (str[0] == '\'' && str[2] == '\'') {
			num = str[1];
			isStr = true;
		}
	}
	
}
