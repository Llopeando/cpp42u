/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:06:42 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/14 12:37:15 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACTS_H
# define CONTACTS_H
#include <iostream>
#include <string>

class	Contacts
{
	public:
		Contacts();
		~Contacts();
		int		contact_id;

		void	ft_add_contact(void);

		void	ft_namestr_parser(std::string str);
		void	ft_lastnamestr_parser(std::string str);
		void	ft_nicknamestr_parser(std::string str);
		void	ft_phonestr_parser(std::string str);
		void	ft_darkestscrstr_parser(std::string str);

	private:
		std::string	_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone;
		std::string	_darkest_secret;
};

#endif
