/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:10:07 by ullorent          #+#    #+#             */
/*   Updated: 2022/07/01 13:44:45 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonyBooky.hpp"

int	main(void)
{
	PhonyBooky	phonebook;
	std::string	get_command;

	while (1)
	{
		std::cout << "PhonyBooky --- Available commands: ADD, SEARCH, EXIT" << std::endl;
		std::cout << "Enter the command here: ";
		std::cin >> get_command;
		std::cout << " " << std::endl;
		if (std::cin.eof())
			break ;
		if (!get_command.compare("EXIT"))
		{
			std::cout << "Bye bye!" << std::endl;
			break ;
		}
		else if (!get_command.compare("ADD"))
			phonebook.ft_add_contact();
		// else if (get_command.compare("SEARCH") == 0)
		// 	phonebook.ft_search_contact();
		else
			std::cout << "[!] Command not found. It was in uppercase?\n" << std::endl;
		get_command.clear();
	}
	return (0);
}
