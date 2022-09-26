/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:39:47 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/26 14:59:31 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	karen;

	if (argc == 2)
		karen.karenFilter(argv[1]);
	else
	{
		std::cout << "[!] Please, verify your arguments" << std::endl;
		return (1);
	}
	return (0);
}
