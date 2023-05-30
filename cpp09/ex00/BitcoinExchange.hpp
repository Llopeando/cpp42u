/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:32:07 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/30 15:49:47 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

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
		std::vector<std::string>	inputDataSaver(const std::string file);
		void						inputSpliter(std::vector<std::string> input);
		void						databaseSpliter(std::vector<std::string> database);

		/* Exceptions */
		class InvalidFileException: public std::exception {
			virtual const char *what() const throw() {
				return ("[\033[31m✗\033[0m] The file you are trying to read is not valid!");
			}
		};

		class DatabaseReadingException: public std::exception {
			virtual const char *what() const throw() {
				return ("[\033[31m✗\033[0m] An error ocurred while reading the database (data.csv)");
			}
		};
	private:
		std::vector<std::string>	inputDate;
		std::vector<std::string>	databaseDate;
		std::vector<std::string>	inputBtcNumber;
		std::vector<std::string>	databaseBtcValue;
};

std::vector<std::string> split(const std::string &string, const char c);

#endif