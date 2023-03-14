/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:36:01 by ullorent          #+#    #+#             */
/*   Updated: 2023/03/13 18:12:05 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main() {
	size_t len = 3;
	const int array[3] = {1,2,3};
	iter(array, len, instantiate);

	std::string strarray[3] = {"Hola", "soy", "Eider"};
	iter(strarray, len, instantiate);

	const float floatarray[3] = {10.1, 10.2, 10.3};
	iter(floatarray, len, instantiate);
}