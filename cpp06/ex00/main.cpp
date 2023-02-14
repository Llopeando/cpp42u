/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:20:37 by ullorent          #+#    #+#             */
/*   Updated: 2023/02/14 16:06:23 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Double.hpp"
#include "Void.hpp"
#include <string>

int	main(int argc, char **argv) {
	if (argc == 2)
	{
		Void	*vd = NULL;
		std::string	str = argv[1];

		vd = new Double(str);
		if (str == "-inff" || str == "+inff" || str == "inff" || str == "nanf" ||
		str == "-inf" || str == "+inf" || str == "inf" || str == "nan") {
			vd->checkException();
		}
		else {
			vd->checkLength();
			if (vd->checkIsNumber(str) == true )
				return (1);
			vd->DoubleNumber();
		}
		delete vd;
	}
	else
	{
		std::cout << "❌ \033[1;31mInssuficient arguments! You need to specify a char (with 'CHAR'), int, float or a double value!\033[0m" << std::endl;
		return (1);
	}
	return (0);
}