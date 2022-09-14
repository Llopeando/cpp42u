/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:41:09 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/14 13:34:27 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BOOK_H
# define BOOK_H
#include "Contacts.hpp"
#include <iostream>
#include <string>

class Book
{
private:
	std::string	name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone;
	std::string	darkest_secret;
	int			contact_id;

	Contacts	cont_array[8];
public:
	Book();
	~Book();
	void	ft_contacts_array();
	//void	ft_add_contact();
	//void	ft_search_contact();
};

#endif