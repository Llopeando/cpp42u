/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:19:30 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/30 15:51:08 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	printVector(std::vector<std::string> file) {
	for (std::vector<std::string>::const_iterator i = file.begin(); i != file.end(); ++i)
		std::cout << *i << std::endl;
}

int main(int argc, char *argv[]) {
	try {
		if (argc != 2) {
			(void)argv;
			std::cout << "[\033[31m✗\033[0m] You've introduced invalid arguments! (Try it like this: ./btc InputDBFileName.txt)" << std::endl;
			return (1);
		}
			std::vector<std::string>	file;
			std::vector<std::string>	dbFile;
			BitcoinExchange	be;

			file = be.inputDataSaver(argv[1]);
			dbFile = be.inputDataSaver("data.csv");
			//printVector(file);
			be.databaseSpliter(dbFile);
			be.inputSpliter(file);
			//printVector(dbFile);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
