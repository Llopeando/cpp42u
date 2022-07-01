/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:06:42 by ullorent          #+#    #+#             */
/*   Updated: 2022/07/01 14:23:12 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACTS_H
# define CONTACTS_H
#include <iostream>

class	Contacts
{
	public:
		Contacts();
		~Contacts();
		void	ft_contacts_parser(std::string str, int boo);
	private:
		std::string	_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone;
		std::string	_darkest_secret;
};

#endif
