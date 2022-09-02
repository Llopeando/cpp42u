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

PhonyBooky::PhonyBooky(this->cont)
{
	std::cout << "Constructor created" << std::endl;
	return ;
}

void	PhonyBooky::ft_add_contact(void)
{
	std::string	contact_str;

	if (this->contact_id == 7)
		this->contact_id = 0;
	else
		this->contact_id++;
	std::cout << "Welcome to the Contact Adder!" << std::endl;
	std::cout << "Your Name please: ";
	std::cin >> contact_str;
	this->cont_array[this->contact_id].ft_contacts_parser(contact_str, 0);
	std::cout << "Your Last Name please: ";
	std::cin >> contact_str;
	this->cont_array[this->contact_id].ft_contacts_parser(contact_str, 1);
	std::cout << "Your Phone Number please: ";
	std::cin >> contact_str;
	this->cont_array[this->contact_id].ft_contacts_parser(contact_str, 2);
	std::cout << "Your Darkest Secret in Life please: ";
	std::cin >> contact_str;
	this->cont_array[this->contact_id].ft_contacts_parser(string, 3);
	std::cout << " " << std::endl;
}