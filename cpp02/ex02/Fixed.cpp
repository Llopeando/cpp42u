/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:33:22 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/22 16:10:29 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// --- Constructors and destructor --- //
//Fixed points are float numbers that do not change, so they are more "usable"
Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int p1) : _value(p1 << _bits) { //Int constant constructor to fixed point
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float p1) : _value(0) { //Float constant constructor to fixed point
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(p1 * (1 << _bits)));
	return ;
}

Fixed::Fixed(const Fixed &p1) { //Copy of constructor
	std::cout << "Copy constructor called" << std::endl;
	*this = p1;
	return;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return;
}

// --- Private variables --- //
int const Fixed::_bits = 8;

// --- Member functions --- //
int	Fixed::getRawBits() const {
	return(this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
	return ;
}

std::ostream & operator<<(std::ostream &o, Fixed const &rhs) { //We insert float value into the 'o' stream, so we can show it in standard output
	o << rhs.toFloat();
	return (o);
}

// --- Value convertors --- //
int	Fixed::toInt() const {
	return(_value / (1 << _bits)); //1 << _bits = 1^8
}

float Fixed::toFloat() const {
	return(roundf(_value) / (1 << _bits)); //_value converted (rounded from int) to float - 1 << _bits = 1^8
}

// --- Comparations operators --- //
bool Fixed::operator>(const Fixed& raw) const {
	if (raw.getRawBits() > raw.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator<(const Fixed& raw) {
	if (raw.getRawBits() < raw.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator>=(const Fixed& raw) {
	if (raw.getRawBits() >= raw.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator<=(const Fixed& raw) {
	if (raw.getRawBits() <= raw.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator==(const Fixed& raw) {
	if (raw.getRawBits() == raw.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator!=(const Fixed& raw) {
	if (raw.getRawBits() != raw.getRawBits())
		return 1;
	return 0;
}

// --- Arithmetics operators --- //
// With this functions you can customize the C++ operators
Fixed &Fixed::operator=(const Fixed& raw) { //This operator will assign the bits value into the _value so it can be shown in standard output
	std::cout << "Assignation operator called" << std::endl;
	_value = raw.getRawBits();
	return (*this);
}
