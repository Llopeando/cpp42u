/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:49:36 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/26 14:35:27 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	karen;

	if (argc == 2)
		karen.complain(argv[1]);
	else
	{
		std::cout << "[!] Please, verify your arguments" << std::endl;
		return (1);
	}
	return (0);
}
