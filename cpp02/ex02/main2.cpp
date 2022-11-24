/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:54:03 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/24 15:55:36 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp" 

int main()
{
    Fixed a;
    Fixed const b( 10 ); Fixed const c( 42.42f ); Fixed const d( b );

    a = b + c;
    std::cout << "[a = " << b << " + " << c << "]" << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "a is " << a.toInt() << " as integer\n" << std::endl;

    a = c - b;
    std::cout << "[a = " << c << " - " << b << "]" << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "a is " << a.toInt() << " as integer\n" << std::endl;

    a = b * c;
    std::cout << "[a = " << b << " * " << c << "]" << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "a is " << a.toInt() << " as integer\n" << std::endl;

    a = b / c;
    std::cout << "[a = " << b << " / " << c << "]" << std::endl;
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

    std::cout << "min(" << a << "," <<  b << ")\n" << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;

    std::cout << "max(" << a << "," <<  b << ")\n" << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    return (0);
}
