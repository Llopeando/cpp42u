/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:35:14 by ullorent          #+#    #+#             */
/*   Updated: 2023/03/21 18:37:21 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VALUE 5

int	main() {
	Array<int>	voidArr;
	Array<int>	original(MAX_VALUE);
	int	*mirror = new int[MAX_VALUE];

	srand(time(NULL));
	for (int i = 0; i < MAX_VALUE; i++) {
		const int	randValue = rand();
		original[i] = randValue;
		mirror[i] = randValue;
	}

	std::cout << "ℹ️ \033[1;37m[--- It has been correctly copied? ---]\033[0m" << std::endl;
	//original[2] = 5;
	try {
		for (int i = 0; i < MAX_VALUE; i++) {
			if (original[i] != mirror[i]) {
				std::cout << "Array pos [" << i << "] ❌ \033[1;91mOops! Check the main.cpp and try again. Exiting...\033[0m" << std::endl;
				delete [] mirror;
				return (1);
			}
			else
				std::cout << "Array pos [" << i << "] ✅ \033[1;92mSUCCESS\033[0m" << std::endl;
		}
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nℹ️ \033[1;37m[--- Deep Copy test ---]\033[0m" << std::endl;
	Array<int>	tmp = original;
	Array<int>	anotherTmp(tmp);
	original[0] = 0;
	tmp[0] = 1;
	anotherTmp[0] = 2;
	std::cout << "original[0] == " << original[0] << std::endl;
	std::cout << "tmp[0] == " << tmp[0] << std::endl;
	std::cout << "anotherTmp[0] == " << anotherTmp[0] << std::endl;

	std::cout << "\nℹ️ \033[1;37m[--- Out of bounds check ---]\033[0m" << std::endl;
	std::cout << "\033[1;93mTest 1: ";
	try {
		original[-14] = 10;
		std::cout << "✅ \033[1;92mSUCCESS\033[0m" << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "\033[1;93mTest 2: ";
	try {
		original[MAX_VALUE] = 10;
		std::cout << "✅ \033[1;92mSUCCESS\033[0m" << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "\033[1;93mTest 3: ";
	try {
		original[1] = 10;
		std::cout << "✅ \033[1;92mSUCCESS\033[0m" << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "\033[1;93mTest 4: ";
	try {
		for (int i = 0; i < MAX_VALUE; i++)
		{
			original[i] = rand();
		}
		std::cout << "✅ \033[1;92mSUCCESS\033[0m" << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	delete [] mirror;
	return (0);
}