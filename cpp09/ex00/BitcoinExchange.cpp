/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:32:53 by ullorent          #+#    #+#             */
/*   Updated: 2023/10/04 16:08:08 by ullorent         ###   ########.fr       */
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
	// std::cout << "BitcoinExchange (=) overload operator called" << std::endl;
	return (*this);
}

/* Member functions */
bool	BitcoinExchange::mapDbInsert(const std::string &ref) {
	std::string	date;
	std::tm		tm;
	std::memset(&tm, 0, sizeof(tm));
	float		num = 0;

	date = ref.substr(0, ref.find_first_of(','));
	if (strptime(date.c_str(), "%Y-%m-%d", &tm) == NULL) {
		std::cout << "[\033[31m✗\033[0m] Error: bad input => " << date << std::endl;
		return false;
	}

	num = atof(ref.substr(ref.find_first_of(',') + 1).c_str());
	mapDb[mktime(&tm)] = num;
	return true;
}

bool	BitcoinExchange::inputAndCalc(const std::string &ref) {
	std::map<time_t, float>::iterator value;
	std::string	date;
	std::tm		tm;
	std::memset(&tm, 0, sizeof(tm));

	date = ref.substr(0, ref.find_first_of('|'));
	if (strptime(date.c_str(), "%Y-%m-%d", &tm) == NULL) {
		std::cout << "[\033[31m✗\033[0m] Error: bad input => " << date << std::endl;
		return false;
	}
	else {
		time_t time = mktime(&tm);
		float	num = atof(ref.substr(ref.find_first_of('|') + 1).c_str());
		if (inputValueChecker(num))
			return false;
		value = mapDb.lower_bound(time);
		if (value == mapDb.begin()) {
			std::cout << "[\033[31m✗\033[0m] Error: bad input => " << date << std::endl;
			return false;
		}
		value--;
		std::cout.precision(2);
		std::cout << date << "=> " << num << " = " << num * value->second << std::fixed << std::endl;
	}
	return true;
}

bool	BitcoinExchange::dataReader(const std::string file, bool boo) {
	std::fstream	inputDataFile;

	inputDataFile.open(file);
	if (!inputDataFile.is_open())
		throw InvalidFileException();
	else {
		std::string	line;
		std::getline(inputDataFile, line);
		while (std::getline(inputDataFile, line)) {
			if (boo)
				mapDbInsert(line);
			else
				inputAndCalc(line);
		}
		inputDataFile.close();
	}
	return true;
}

bool	BitcoinExchange::inputValueChecker(int inputBtcNumber) {
	if (inputBtcNumber > 2147483647 || inputBtcNumber < -2147483647) {
		std::cout << "[\033[31m✗\033[0m] Error: too large number" << std::endl;
		return true;
	}
	else if (inputBtcNumber < 0) {
		std::cout << "[\033[31m✗\033[0m] Error: not a positive number" << std::endl;
		return true;
	}
	else if (inputBtcNumber > 1000) {
		std::cout << "[\033[31m✗\033[0m] Error: larger than 1000" << std::endl;
		return true;
	}
	return false;
}
