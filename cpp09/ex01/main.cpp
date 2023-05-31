/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:51:35 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/31 19:21:08 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "[\033[31m✗\033[0m] You've introduced invalid arguments! (Try it like this: ./RPN " << "'1 + 1'" << std::endl;
		return (1);
	}
	std::list<char *>	argList;
	argList.push_back(argv[1]);

	RPN	rpn;

	rpn.argumentsTaker(argList);
	return (0);
}
