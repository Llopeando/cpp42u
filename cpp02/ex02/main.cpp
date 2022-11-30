/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:54:03 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/30 10:01:31 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp" 

int main()
{
    //Subject Main tests
    Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "\033[33m[-- Subject Main tests --]\033[0m" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << "\n" << std::endl;
    //My own Main tests
    a = 0;
    Fixed const c = 42.42f; Fixed const d( b ); Fixed e = 10;

    std::cout << "\033[33m[-- My own Main tests --]\033[0m" << std::endl;
    a = e + c;
    std::cout << "[a = " << e << " + " << c << "]" << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "a is " << a.toInt() << " as integer\n" << std::endl;

    a = c - e;
    std::cout << "[a = " << c << " - " << e << "]" << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "a is " << a.toInt() << " as integer\n" << std::endl;

    a = e * c;
    std::cout << "[a = " << e << " * " << c << "]" << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "a is " << a.toInt() << " as integer\n" << std::endl;

    a = e / c;
    std::cout << "[a = " << e << " / " << c << "]" << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "a is " << a.toInt() << " as integer\n" << std::endl;

    a = 0;
    std::cout << "[" << a << "++]" << std::endl;
    std::cout << "a is " << a++ << std::endl;
    std::cout << "a is " << a << "\n" << std::endl;

    a = 0;
    std::cout << "[++" << a << "]" << std::endl;
    std::cout << "a is " << ++a << std::endl;
    std::cout << "a is " << a << "\n" << std::endl;

    a = 0;
    std::cout << "[" << a << "--]" << std::endl;
    std::cout << "a is " << a-- << std::endl;
    std::cout << "a is " << a << "\n" << std::endl;

    a = 0;
    std::cout << "[--" << a << "]" << std::endl;
    std::cout << "a is " << --a << std::endl;
    std::cout << "a is " << a << "\n" << std::endl;

    std::cout << "min(" << a << "," <<  e << ")" << std::endl;
    std::cout << Fixed::min(a, e) << "\n" << std::endl;

    std::cout << "max(" << a << "," <<  e << ")" << std::endl;
    std::cout << Fixed::max(a, e) << std::endl;
    
    return (0);
}
