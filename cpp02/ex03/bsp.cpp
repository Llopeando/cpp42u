/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:51:53 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/25 17:46:21 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// --- Main function --- //
bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed w1;
	Fixed w2;

	if (c.get_y() == a.get_y())
	{
		c.get_y()
	}
	w1 = (a.get_x() * (c.get_y() - a.get_y()) + (point.get_y() - a.get_y()) * (c.get_x() - a.get_x()) - point.get_x() * (c.get_y() - a.get_y())) /
	((b.get_y() - a.get_y()) * (c.get_x() - a.get_x()) - (b.get_x() - a.get_x()) * (c.get_y() - a.get_y()));
	std::cout << "w1 = " << w1 << std::endl;

	w2 = (point.get_y() - a.get_y() - w1 * (b.get_y() - a.get_y())) / (c.get_y() - a.get_y());
	std::cout << "w2 = " << w2 << "\n" << std::endl;

	std::cout << "w2 (2)= " << w2 << std::endl;
	if (w1 > 0 && w2 > 0 && w1 + w2 < 1)
		return (true);
	else
	{
		return (false);
	}
}
