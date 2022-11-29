/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:51:53 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/29 13:47:44 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// --- Main function --- //
float triangle_area(Point const a, Point const b, Point const c) {
	// 'fabs' its a function which returns the absolute value of an argument in float. (example; -5.5 absolute value would be 5.5)
	return (fabs(a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y())) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	float area_ABC;
	float area_PBC;
	float area_APC;
	float area_ABP;

	area_ABC = triangle_area(a, b, c); //We calculate the triangle area here
	//std::cout << "ABC = " << area_ABC << std::endl;
	area_PBC = triangle_area(point, b, c); //We calculate the triangle area with point, b and c values
	//std::cout << "PBC = " << area_PBC << std::endl;
	area_APC = triangle_area(a, point, c); //We calculate the triangle area with a, point and c values
	//std::cout << "APC = " << area_APC << std::endl;
	area_ABP = triangle_area(a, b, point);  //We calculate the triangle area with a, b and point values
	//std::cout << "ABP = " << area_ABP << std::endl;
	if (area_PBC == 0 || area_APC == 0 || area_ABP == 0)
		return (false);
	else if (area_ABC == area_PBC + area_APC + area_ABP)
		return (true);
	else
		return (false);
}
