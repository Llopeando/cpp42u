/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:50:34 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/27 14:31:02 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

//Constructors and destructor
Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed& p1) { //Copy of constructor
	std::cout << "Copy constructor called" << std::endl;
	return;
}

Fixed::Fixed(int p1) : _value(p1){ //Assignment operator overload
	std::cout << "Assignation operator called" << std::endl;
	return;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return;
}

//Private variables
int const Fixed::_bits = 8;

//Member functions (exercise main functions)
int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return(0);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "0" << std::endl;
	return;
}
