/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:20:37 by ullorent          #+#    #+#             */
/*   Updated: 2023/03/09 12:56:26 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Double.hpp"
#include "Void.hpp"
#include <string>

int	main(int argc, char **argv) {
	int	c = 0;

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
			while (argv[1][c] == '.')
			{
				if (c >= 1 || str.size() == 1)
				{
					std::cout << "❌ \033[1;31mInvalid arguments! You need to specify a char (with 'CHAR'), int, float or a double value!\033[0m" << std::endl;
					return (1);
				}
				c++;
			}
			vd->checkLength();
			vd->DoubleNumber();
		}
		delete vd;
	}
	else
	{
		std::cout << "❌ \033[1;31mInsufficient or too many arguments! You need to specify a char (with 'CHAR'), int, float or a double value!\033[0m" << std::endl;
		return (1);
	}
	return (0);
}