/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:41:28 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/29 12:09:41 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CANONICAL_POINT_H
#define CANONICAL_POINT_H
#include "Fixed.hpp"
#include <iostream>
#include <string>
#include <cmath>

class Point
{
	public:
		Point();
		Point(const float &p1, const float &p2);
		Point(const Point &p1);
		~Point();

		Point &operator=(const Point &raw);

		float get_x() const;
		float get_y() const;
	private:
		Fixed const _x;
		Fixed const _y;
};
bool bsp(Point const a, Point const b, Point const c, Point const point);
float triangle_area(Point const a, Point const b, Point const c);
std::ostream & operator<<(std::ostream &o, Point const &rhs);

#endif