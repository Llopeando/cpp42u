/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:47:21 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/25 17:05:29 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main() {
	Point a(0, 7);
	Point b(0, 15);
	Point c(15, 7);
	Point point(1, 9);

	std::cout << bsp(a, b, c, point) << std::endl;

	return 0;
}
