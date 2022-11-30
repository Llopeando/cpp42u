/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:33:22 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/30 10:17:48 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// --- Constructors and destructor --- //
//Fixed points are float numbers that do not change, so they are more "usable"
Fixed::Fixed() : _value(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int p1) : _value(p1 << _bits) { //Int constant constructor to fixed point
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float p1) : _value(0) { //Float constant constructor to fixed point
	//std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(p1 * (1 << _bits)));
}

Fixed::Fixed(const Fixed &p1) { //Copy of constructor
	//std::cout << "Copy constructor called" << std::endl;
	*this = p1;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
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
bool Fixed::operator>(const Fixed &raw) const {
	if (this->getRawBits() > raw.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator<(const Fixed &raw) const {
	if (this->getRawBits() < raw.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator>=(const Fixed &raw) const {
	if (this->getRawBits() >= raw.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator<=(const Fixed &raw) const {
	if (this->getRawBits() <= raw.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator==(const Fixed &raw) const {
	if (this->getRawBits() == raw.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator!=(const Fixed &raw) const {
	if (this->getRawBits() != raw.getRawBits())
		return 1;
	return 0;
}

// --- Arithmetics operators --- //
// With this functions you can customize the C++ operators
Fixed &Fixed::operator=(const Fixed& raw) { //This operator will assign the bits value into the _value so it can be shown in standard output
	//std::cout << "Assignation operator called" << std::endl;
	_value = raw.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed &raw) const {
	Fixed	temp;

	temp.setRawBits((this->getRawBits() + raw.getRawBits()));
	return (temp);
}

Fixed Fixed::operator-(const Fixed &raw) const {
	Fixed	temp;

	temp.setRawBits((this->getRawBits() - raw.getRawBits()));
	return (temp);
}

Fixed Fixed::operator*(const Fixed &raw) const {
	Fixed	temp;

	temp.setRawBits((this->getRawBits() * raw.getRawBits()) / (1 << _bits));
	return (temp);
}

Fixed Fixed::operator/(const Fixed &raw) const {
	Fixed	temp;

	temp.setRawBits((roundf(this->getRawBits()) / raw.getRawBits()) * (1 << _bits));
	return (temp);
}

// --- PreInc/PostInc/PreDec/PostDec --- //
Fixed Fixed::operator++() { //Pre Increment function (++value)
	this->_value += 1;
	return (*this);
}

Fixed Fixed::operator++(int) { //Post Increment function (value++)
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator--() { //Pre Decrement function (--value)
	this->_value -= 1;
	return (*this);
}

Fixed Fixed::operator--(int) { //Post Decrement function (value--)
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

// --- Member function 'min' and 'max' --- //
Fixed &Fixed::min(Fixed &p1, Fixed &p2) { //Here we return the smallest NON-constant fixed point value
	if (p1.getRawBits() < p2.getRawBits())
		return (p1);
	else
		return (p2);
}

const Fixed &Fixed::min(const Fixed &p1, const Fixed &p2) { //Here we return the smallest constant fixed point value
	if (p1.getRawBits() < p2.getRawBits())
		return (p1);
	else
		return (p2);
}

Fixed &Fixed::max(Fixed &p1, Fixed &p2) { //Here we return the bigger NON-constant fixed point value
	if (p1.getRawBits() > p2.getRawBits())
		return (p1);
	else
		return (p2);
}

const Fixed &Fixed::max(const Fixed &p1, const Fixed &p2) { //Here we return the bigger constant fixed point value
	if (p1.getRawBits() > p2.getRawBits())
		return (p1);
	else
		return (p2);
}
