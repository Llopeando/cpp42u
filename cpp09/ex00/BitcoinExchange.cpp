/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:32:53 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/31 17:39:49 by ullorent         ###   ########.fr       */
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
std::vector<std::string>	BitcoinExchange::inputDataSaver(const std::string file) {
	std::vector<std::string>	readed;
	std::fstream	inputDataFile;

	inputDataFile.open(file);
	if (!inputDataFile.is_open())
		throw InvalidFileException();
	else {
		std::string	line;
		while (std::getline(inputDataFile, line)) {
			readed.push_back(line);
		}
		inputDataFile.close();
	}
	return (readed);
}

void	BitcoinExchange::inputSpliter(std::vector<std::string> input) {
	std::vector<std::string>	tokens;

	for (size_t i = 0; i < input.size(); i++) {
		tokens = split(input[i], ' ');
		std::string date = tokens[0];
		std::string number = tokens[2];

		inputDate.push_back(date);
		inputBtcNumber.push_back(number);
	}
}

void	BitcoinExchange::databaseSpliter(std::vector<std::string> database) {
	std::vector<std::string>	tokens;

	for (size_t i = 0; i < database.size(); i++) {
		tokens = split(database[i], ',');
		if (tokens.size() == 2) {
			std::string date = tokens[0];
			std::string number = tokens[1];

			databaseDate.push_back(date);
			databaseBtcValue.push_back(number);
		}
		else
			std::cout << "[\033[31m✗\033[0m] Error: bad database input => " << tokens[0] << std::endl;
	}
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
	return false;
}

void	BitcoinExchange::btcCalculator() {
	for (size_t i = 1; i < inputDate.size(); i++) {
		size_t	closestIndex = 0;
		bool	dateFound = false;
		for (size_t j = 1; j < databaseDate.size(); j++) {
			if (databaseDate[j] == inputDate[i]) {
				closestIndex = j;
				dateFound = true;
				break ;
			}
			else if (databaseDate[j] < inputDate[i]) {
				closestIndex = j;
			}
			else
				break ;
		}
		if (dateFound || closestIndex > 0) {
			if (inputValueChecker(atoi(inputBtcNumber[i].c_str())) == false)
				std::cout << inputDate[i] << " => " << inputBtcNumber[i] << " = " << atof(inputBtcNumber[i].c_str()) * atof(databaseBtcValue[closestIndex].c_str()) << std::endl;
		}
		else {
			std::cout << "[\033[31m✗\033[0m] Error: bad input => " << inputDate[i] << std::endl;
		}
	}
}

/* Public functions */
// Split function taken from the ft_irc project made by eperaita, ecamara and me
std::vector<std::string> split(const std::string &string, const char c)
{
	std::vector<std::string> tokens;
	std::string::size_type start = string.find_first_not_of(c);
	std::string::size_type end = string.find_first_of(c, start);
	while (start != std::string::npos)
	{
		if (end != std::string::npos)
		{ 
			tokens.push_back(string.substr(start, end - start));
			start = string.find_first_not_of(c, end);
			end = string.find_first_of(c, start);
		}
		else
		{
			tokens.push_back(string.substr(start));
			break;
		}
	}
	return tokens;
}
