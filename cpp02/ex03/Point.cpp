/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:41:26 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/29 13:27:07 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

// --- Constructors and destructor --- //
Point::Point() : _x(0), _y(0) {
	//std::cout << "Constructor called" << std::endl;
}

Point::Point(const Point &p1) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = p1;
}

Point::Point(const float &p1, const float &p2) : _x(p1), _y(p2) {
	//std::cout << "Float constructor called" << std::endl;
}

Point::~Point() {
	//std::cout << "Destructor called" << std::endl;
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
float Point::get_x() const {
	return (_x.toFloat());
}

float Point::get_y() const {
	return (_y.toFloat());
}
