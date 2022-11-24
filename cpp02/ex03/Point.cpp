/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:41:26 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/24 16:51:18 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {
	std::cout << "Constructor called" << std::endl;
	return;
}

Point::Point(const Point &p1) {
	std::cout << "Copy constructor called" << std::endl;
	return;
}

Point::Point(const float &p1, const float &p2) : x(0), y(0) {
	std::cout << "Float constructor called" << std::endl;
	return;
}

Point::~Point() {
	std::cout << "Destructor called" << std::endl;
	return;
}