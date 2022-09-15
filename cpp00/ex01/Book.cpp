/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 13:02:37 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/15 14:31:25 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.hpp"

//Constructor and destructor (~)
Book::Book() {
	contact_id = 0;
	contact_qu = 0;
}

Book::~Book() { }

//Contacts array adder
void	Book::ft_contacts_array(void)
{
	std::cout << "--> This contact ID: [" << contact_id << "] <--" << std::endl;
	std::cout << "this->contact_id: " << this->contact_id << std::endl;
	cont_array[contact_id].ft_add_contact();
	if (this->contact_id == 7)
		this->contact_id = 0;
	else
		this->contact_id++;
	if (this->contact_qu < 7)
		this->contact_qu++;
}

//Contacts search list
void	Book::ft_search_contacts(void)
{
	std::string	str;
	int			nbr;
	
	nbr = 0;
	this->ft_table_printer();
	while (1)
	{
		std::cout << "--> Which contact do you want to search? [0 to 7]: ";
		std::getline(std::cin, str);
		nbr = atoi(str.c_str());
		if (nbr >= 0 && nbr <= 7)
		{
			std::cout << "\n--- Contact ID: " << str << " ---" << std::endl;
			std::cout << "Name: " << this->cont_array[nbr].ft_data_return(0) << std::endl;
			std::cout << "Last name: " << this->cont_array[nbr].ft_data_return(1) << std::endl;
			std::cout << "Nickname: " << this->cont_array[nbr].ft_data_return(2) << std::endl;
			std::cout << "Phone: " << this->cont_array[nbr].ft_data_return(3) << std::endl;
			std::cout << "His darkest secret: " << this->cont_array[nbr].ft_data_return(4) << std::endl;
			return ;
		}
		else
		{
			std::cout << "\n[!] Invalid character or out of range number has been found." << std::endl;
			std::cout << "Please, try again with another number." << std::endl;
		}
	}
}

//Contacts table header
void	Book::ft_table_printer(void)
{
	int	c;

	c = 0;
	std::cout << "┌-----------┬-----------┬----------┬----------┐" << std::endl;
	std::cout << "|     Index |      Name | Last name|  Nickname|" << std::endl;
	std::cout << "├-----------|-----------|----------|----------┤" << std::endl;
	std::cout << "ID: " << this->contact_qu << std::endl;
	while (c <= this->contact_qu)
	{
		std::cout << "|" <<std::setw(10) << c << " | ";
		this->ft_table_str_printer(this->cont_array[c].ft_data_return(0));
		std::cout << "|";
		this->ft_table_str_printer(this->cont_array[c].ft_data_return(1));
		std::cout << "|";
		this->ft_table_str_printer(this->cont_array[c].ft_data_return(2));
		std::cout << "|";
		std::cout << std::endl;
		c++;
	}
	std::cout << "└-----------┴-----------┴----------┴----------┘" << std::endl;
}

void	Book::ft_table_str_printer(std::string str)
{
	if (str.size() > 9)
		std::cout << str.substr(0, 9) << '.';
	else
		std::cout << std::setw(10) << str;
}
