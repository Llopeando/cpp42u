/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 13:02:37 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/14 13:58:44 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.hpp"

Book::Book() {
	contact_id = 0;
}

Book::~Book() { }

void	Book::ft_contacts_array(void)
{
	std::cout << "--> This contact ID: [" << contact_id << "] <--" << std::endl;
	cont_array[contact_id].ft_add_contact();
	if (contact_id == 7)
		contact_id = 0;
	else
		contact_id++;
}
