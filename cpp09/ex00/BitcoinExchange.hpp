/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:32:07 by ullorent          #+#    #+#             */
/*   Updated: 2023/09/28 17:39:41 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <ctime>

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
		bool	dataReader(const std::string file, bool boo);
		bool	inputValueChecker(int inputBtcNumber);
		bool	mapDbInsert(const std::string &ref);
		bool	inputAndCalc(const std::string &ref);
		void	btcCalculator();

		/* Exceptions */
		class InvalidFileException: public std::exception {
			virtual const char *what() const throw() {
				return ("[\033[31mFATAL\033[0m] The file you are trying to read is not valid!");
			}
		};
		class ProgramException: public std::exception {
			virtual const char *what() const throw() {
				return ("[\033[31mFATAL\033[0m] An error ocurred reading the file");
			}
		};
	private:
		std::map<time_t, float>	mapDb;
};

#endif