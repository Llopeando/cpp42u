/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonyBooky.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:41:09 by ullorent          #+#    #+#             */
/*   Updated: 2022/07/01 14:03:17 by ullorent         ###   ########.fr       */
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

	Contacts	cont_array[8];
public:
	PhonyBooky();
	void	ft_add_contact();
	//void	ft_search_contact();
};

#endif