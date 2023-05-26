/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:19:30 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/26 15:20:07 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
	try {
		if (argc != 2) {
			(void)argv;
			std::cout << "[\033[31m✗\033[0m] You've introduced invalid arguments! (Try it like this: ./btc InputDBFileName.txt)" << std::endl;
			return (1);
		}
			BitcoinExchange	be;

			be.mainDataOpener();
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
