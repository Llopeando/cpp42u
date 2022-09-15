/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:41:09 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/15 14:02:59 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BOOK_H
# define BOOK_H
#include "Contacts.hpp"
#include <iostream>
#include <string>

class Book
{
	public:
		Book();
		~Book();
		
		void	ft_contacts_array();
		void	ft_search_contacts();

		void	ft_table_printer();
		void	ft_table_str_printer(std::string str);

	private:
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone;
		std::string	darkest_secret;
		int			contact_id;
		int			contact_qu;

		Contacts	cont_array[8];
};

#endif