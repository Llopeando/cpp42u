/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:36:13 by ullorent          #+#    #+#             */
/*   Updated: 2023/03/14 13:40:47 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP_
#define ITER_HPP_
#include <iostream>

template	<typename I>
void	instantiate(I	const &val) { //Se "ejecutará" esta función debido a que hemos instanciando este template a la función iter pasándolo como tercer argumento
	std::cout << val << ", ";
}

template	<typename T>
void	iter(T *arr, size_t len, void(*arr_print)(T const &)) //Le damos un nombre a la función, que al ser la instancia de 'I', ejecutará la función "Instantiate" del template 'I'
{
	for (size_t i = 0; i < len; i++) {
		arr_print(arr[i]);
	}
}
#endif