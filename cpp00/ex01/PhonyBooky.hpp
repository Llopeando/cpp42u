/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonyBooky.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:41:09 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/09 19:19:39 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONYBOOKY_H
# define PHONYBOOKY_H
#include "Contacts.hpp"
#include <iostream>
#include <string>

class PhonyBooky
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
	PhonyBooky();
	~PhonyBooky();
	void	ft_add_contact();
	//void	ft_search_contact();
};

#endif