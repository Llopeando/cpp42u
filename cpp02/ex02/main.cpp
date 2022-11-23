/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:31:09 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/23 20:24:02 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	Fixed c;
	Fixed const d;

	std::cout << "\033[31mFixed 'a' value = " << a << "\033[0m" << std::endl;
	std::cout << "\033[31mFixed '++a' value = " << ++a << "\033[0m\n" << std::endl;
	std::cout << "\033[31mFixed 'a' value = " << a << "\033[0m" << std::endl;
	std::cout << "\033[31mFixed 'a++' value = " << a++ << "\033[0m\n" << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
