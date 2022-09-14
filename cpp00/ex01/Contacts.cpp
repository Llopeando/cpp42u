/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:06:39 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/14 13:57:27 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts(void) {
	return ;
}

Contacts::~Contacts(void) {
	return ;
}

//Strings data parser
void	Contacts::ft_namestr_parser(std::string str) {
	this->_name = str;
}

void	Contacts::ft_lastnamestr_parser(std::string str) {
	this->_last_name = str;
}

void	Contacts::ft_nicknamestr_parser(std::string str) {
	this->_nickname = str;
}

void	Contacts::ft_phonestr_parser(std::string str) {
	this->_phone = str;
}

void	Contacts::ft_darkestscrstr_parser(std::string str) {
	this->_darkest_secret = str;
}

//Contacts adder
void	Contacts::ft_add_contact(void)
{
	std::cout << "Your Name please: ";
	std::getline(std::cin, _name);
	std::cout << "Your Last Name please: ";
	std::getline(std::cin, _last_name);
	std::cout << "Your Nickname please: ";
	std::getline(std::cin, _nickname);
	std::cout << "Your Phone Number please: ";
	std::getline(std::cin, _phone);
	std::cout << "Your Darkest Secret in Life please: ";
	std::getline(std::cin, _darkest_secret);
}
