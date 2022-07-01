/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:06:39 by ullorent          #+#    #+#             */
/*   Updated: 2022/07/01 14:23:22 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts(void)
{
	return ;
}

Contacts::~Contacts(void)
{
	return ;
}

void	Contacts::ft_contacts_parser(std::string str, int boo)
{
	if (boo == 0)
		this->_name = str;
	if (boo == 1)
		this->_last_name = str;
	if (boo == 2)
		this->_nickname = str;
	if (boo == 3)
		this->_phone = str;
	if (boo == 4)
		this->_darkest_secret = str;
}
