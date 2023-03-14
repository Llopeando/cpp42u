/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:36:13 by ullorent          #+#    #+#             */
/*   Updated: 2023/03/13 18:18:04 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP_
#define ITER_HPP_
#include <iostream>

template	<typename I>
void	instantiate(I	const &val) {
	std::cout << val << std::endl;
}

template	<typename T>
void	iter(T *arr, size_t len, void(*func)(T const &))
{
	for (size_t i = 0; i < len; i++) {
		func(arr[i]);
	}
}
#endif