/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:32:53 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/26 14:49:57 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* Constructors and destructor */
BitcoinExchange::BitcoinExchange() {
	// std::cout << "BitcoinExchange constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &ref) {
	*this = ref;
	// std::cout << "BitcoinExchange COPY constructor called" << std::endl;
}

BitcoinExchange::~BitcoinExchange() {
	// std::cout << "BitcoinExchange destructor called" << std::endl;
}

/* Overload operator */
BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &ref) {
	if (this != &ref)
		*this = ref;
	return (*this);
	// std::cout << "BitcoinExchange (=) overload operator called" << std::endl;
}

/* Member functions */
void	BitcoinExchange::mainDataOpener() {
	std::fstream	mainDataFile;

	mainDataFile.open("data.csv");
	if (!mainDataFile.is_open())
		throw InvalidMainDBFileException();
}
