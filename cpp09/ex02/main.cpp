/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:19:22 by ullorent          #+#    #+#             */
/*   Updated: 2023/09/29 14:43:24 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char *argv[]) {
	if (argc <= 2) {
		std::cout << "" "[\033[31m✗\033[0m] You've introduced invalid arguments! (Try it like this: ./PmergeMe " << "3 2 1)" << std::endl;
		return (1);
	}
	PmergeMe	pm;

	for (int i = 1; i < argc; i++) {
		int number = atoi(argv[i]);
		pm.numbersInserter(number, 0);
	}
	pm.numbersInserter(0, 1);
	return (0);
}
