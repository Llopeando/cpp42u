/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:41:28 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/24 16:50:32 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CANONICAL_POINT_H
#define CANONICAL_POINT_H
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

		

	private:
		Point const x;
		Point const y;
};

#endif