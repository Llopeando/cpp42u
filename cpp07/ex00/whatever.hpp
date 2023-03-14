/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:01:37 by ullorent          #+#    #+#             */
/*   Updated: 2023/03/13 16:15:28 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP_
#define WHATEVER_HPP_
#include <iostream>
#include <string>

template <typename templ>
void	swap(templ &c, templ &d) {
	templ	temp = c;
	c = d;
	d = temp;
}

template <typename templ>
templ	min(templ &c, templ &d) {
	if (c == d)
		return (d);
	if (c < d)
		return (c);
	else
		return (d);
}

template <typename templ>
templ	max(templ &c, templ &d) {
	if (c == d)
		return (d);
	if (c > d)
		return (c);
	else
		return (d);
}

#endif