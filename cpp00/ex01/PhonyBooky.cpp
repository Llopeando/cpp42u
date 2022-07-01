/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonyBooky.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 13:02:37 by ullorent          #+#    #+#             */
/*   Updated: 2022/07/01 14:03:10 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonyBooky.hpp"

PhonyBooky::PhonyBooky(void)
{
	std::cout << "Constructor created" << std::endl;
	return ;
}

void	PhonyBooky::ft_add_contact(void)
{
	std::string	string;

	std::cout << "Welcome to the Contact Adder!" << std::endl;
	std::cout << "Your Name please: ";
	std::cin >> string;
	this->cont_array[0].ft_contacts_parser(string, 0);
	std::cout << "Your Last Name please: ";
	std::cin >> string;
	this->cont_array[1].ft_contacts_parser(string, 1);
	std::cout << "Your Phone Number please: ";
	std::cin >> string;
	this->cont_array[2].ft_contacts_parser(string, 2);
	std::cout << "Your Darkest Secret in Life please: ";
	std::cin >> string;
	this->cont_array[3].ft_contacts_parser(string, 3);
	std::cout << " " << std::endl;
}