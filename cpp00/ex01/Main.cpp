/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:10:07 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/13 10:20:42 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonyBooky.hpp"

int	main(void)
{
	PhonyBooky	phonebook;
	Contacts	contacts;
	std::string	get_command;

	while (1)
	{
		std::cout << "PhonyBooky --- Available commands: ADD, SEARCH, EXIT" << std::endl;
		std::cout << "Enter the command here: ";
		std::cin >> get_command;
		std::cout << " " << std::endl;
		std::cout << get_command << std::endl;
		if (std::cin.eof())
			break ;
		if (!get_command.compare("EXIT"))
		{
			std::cout << "Bye bye!" << std::endl;
			break ;
		}
		else if (!get_command.compare("ADD"))
		{
			contacts.ft_add_contact();
			std::cout << " " << std::endl;
		}
		// else if (get_command.compare("SEARCH") == 0)
		// 	phonebook.ft_search_contact();
		else
			std::cout << "[!] Command not found. It was in uppercase?\n" << std::endl;
		get_command.clear();
	}
	return (0);
}
