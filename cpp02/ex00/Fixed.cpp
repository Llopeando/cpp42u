/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:50:34 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/30 10:16:31 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

//Constructors and destructor
Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& p1) { //Copy of constructor
	std::cout << "Copy constructor called" << std::endl;
	*this = p1;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

//Private variables
int const Fixed::_bits = 8;

//Member functions
int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return(_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
	return ;
}

//Operator overload function
Fixed &Fixed::operator=(const Fixed& raw) {
	std::cout << "Assignation operator called" << std::endl;
	(this->_value) = raw.getRawBits();
	return (*this);
}
