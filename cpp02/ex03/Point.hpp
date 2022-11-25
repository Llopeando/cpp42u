/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:41:28 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/25 17:44:51 by ullorent         ###   ########.fr       */
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

		Fixed get_x() const;
		Fixed get_y() const;
		void set_x(float const raw);
		void set_y(float const raw);
	private:
		Fixed const _x;
		Fixed const _y;
};
bool bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream & operator<<(std::ostream &o, Point const &rhs);

#endif