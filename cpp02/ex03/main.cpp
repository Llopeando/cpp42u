/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:47:21 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/29 13:55:23 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main() {
	Point a(0, 0); // Triangle point 1
	Point b(20, 0); // Triangle point 2
	Point c(10, 30); // Triangle point 3
	Point point(8.5, 25); // Point to search

	if (bsp(a, b, c, point))
		std::cout << "\033[1;37m[BSP] \033[32mThe point is inside the triangle!" << std::endl;
	else
		std::cout << "\033[1;37m[BSP] \033[31mThe point is NOT inside the triangle!" << std::endl;

	return 0;
}
