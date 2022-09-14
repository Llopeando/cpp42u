/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:10:07 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/14 13:56:01 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.hpp"

int	main(void)
{
	Book	book = Book();
	Contacts	contacts;
	std::string	get_command;

	while (1)
	{
		std::cout << "PhonyBooky --- Available commands: ADD, SEARCH, EXIT" << std::endl;
		std::cout << "Enter the command here: ";
		std::getline(std::cin, get_command);
		if (get_command.size() == 0)
			continue ;
		if (std::cin.eof())
			break ;
		if (get_command == "EXIT")
		{
			std::cout << "Bye bye!" << std::endl;
			break ;
		}
		else if (get_command == "ADD")
		{
			std::cout << std::endl;
			book.ft_contacts_array();
			std::cout << std::endl;
		}
		// else if (get_command.compare("SEARCH") == 0)
		// 	phonebook.ft_search_contact();
		else
			std::cout << "[!] Command not found. It was in uppercase?\n" << std::endl;
		get_command.clear();
	}
	return (0);
}
