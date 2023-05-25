/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:51:10 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/25 16:15:48 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

/* Exception */
class	ElementNotFoundException: public std::exception {
	virtual const char *what() const throw() {
		return ("[\033[31m✗\033[0m] This number was not found!");
	}
};

/* Template function */
template <typename T>
void	ocurrence(const T &ocurrence, int &tosearch) {
	typename T::const_iterator it;
	it = std::find(ocurrence.begin(), ocurrence.end(), tosearch);
	if (it != ocurrence.end()) {
		std::cout << "[\033[32m✔\033[0m] A coincidence was found! Number: \033[1;37m" << *it << "\033[0m" << std::endl;
	}
	else {
		throw ElementNotFoundException();
	}
}

#endif