/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:19:30 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/31 17:42:41 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
	try {
		if (argc != 2) {
			std::cout << "[\033[31m✗\033[0m] You've introduced invalid arguments! (Try it like this: ./btc InputDBFileName.txt)" << std::endl;
			return (1);
		}
			std::vector<std::string>	file;
			std::vector<std::string>	dbFile;
			BitcoinExchange	be;

			file = be.inputDataSaver(argv[1]);
			dbFile = be.inputDataSaver("data.csv");

			be.inputSpliter(file);
			be.databaseSpliter(dbFile);
			be.btcCalculator();
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
