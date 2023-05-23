/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:07:48 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/23 16:11:35 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main() {
	EasyFind	easyfind;
	std::vector<int>	mainlist;
	std::list<int>		list;
	std::vector<int>	tosearch;
	std::vector<int>	tofail;

	for (int i = 0; i < 5; i++) {
		mainlist.push_back(i);
		list.push_back(i);
		tosearch.push_back(i);
	}

	for (int i = 0; i > -5; i--) {
		tofail.push_back(i);
	}

	/* Everything is good checker */
	std::cout << "------- This list is \033[32mGOOD\033[0m check ------- " << std::endl;
	for (size_t i = 0; i < tosearch.size(); i++) {
		try {
			easyfind.ocurrence(mainlist, tosearch[i]);
			//easyfind.ocurrence(list, tosearch[i]); //Remove this comment to check the list
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}

	/* Everything is bad checker */
	std::cout << "\n------- This list is \033[31mBAD\033[0m check ------- " << std::endl;
	for (size_t i = 0; i < tosearch.size(); i++) {
		try {
			easyfind.ocurrence(tofail, tosearch[i]);
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
}