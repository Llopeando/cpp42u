/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:32:07 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/26 14:56:26 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_
#include <iostream>
#include <string>
#include <fstream>

class BitcoinExchange
{
	public:
		/* Constructors and destructor */
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &ref);
		~BitcoinExchange();

		/* Overload operator */
		BitcoinExchange	&operator=(const BitcoinExchange &ref);

		/* Member functions */
		void	mainDataOpener();

		/* Exceptions */
		class InvalidMainDBFileException: public std::exception {
			virtual const char *what() const throw() {
				return ("[\033[31m✗\033[0m] The file you are trying to read is not valid!");
			}
		};
	private:
		/* data */
};

#endif