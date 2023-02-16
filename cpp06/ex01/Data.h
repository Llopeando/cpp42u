/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:52:27 by ullorent          #+#    #+#             */
/*   Updated: 2023/02/16 19:20:15 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H_
#define DATA_H_
#include <stdint.h>
#include <iostream>

struct Data
{
	uintptr_t	serialize(Data *ptr);
	Data*		deserialize(uintptr_t raw);
};

#endif