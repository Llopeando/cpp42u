/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:41:26 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/25 17:45:10 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

// --- Constructors and destructor --- //
Point::Point() : _x(0), _y(0) {
	//std::cout << "Constructor called" << std::endl;
	return;
}

Point::Point(const Point &p1) : _x(p1.get_x()), _y(p1.get_y()) {
	//std::cout << "Copy constructor called" << std::endl;
	return;
}

Point::Point(const float &p1, const float &p2) : _x(p1), _y(p2) {
	std::cout << "Float constructor called" << std::endl;
	return;
}

Point::~Point() {
	//std::cout << "Destructor called" << std::endl;
	return;
}

// --- Assignation operator overload  --- //
Point &Point::operator=(const Point &raw) {
	*(Fixed*)&this->_x = raw.get_x();
	*(Fixed*)&this->_y = raw.get_y();
	return (*this);
}

std::ostream & operator<<(std::ostream &o, Point const &rhs) { //We insert float value into the 'o' stream, so we can show it in standard output
	o << rhs.get_x() << " " << rhs.get_y();
	return (o);
}

// --- Value getters --- //
Fixed Point::get_x() const {
	return (this->_x);
}

Fixed Point::get_y() const {
	return (this->_y);
}

void Point::set_x(float const raw) {
	this->_x = raw;
}