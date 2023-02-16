/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:06:05 by ullorent          #+#    #+#             */
/*   Updated: 2023/02/16 19:16:51 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"

uintptr_t	serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int	main() {
	Data	*data = new Data();

	uintptr_t	toInt = serialize(data);
	std::cout << "\033[1;37mSerialization: \033[1;33m" << toInt << std::endl;
	Data	*toData = deserialize(toInt);
	std::cout << "\n\033[1;37mDeserialize: \033[1;33m" << toData << "\n\033[1;37mOriginal: \033[1;33m   " << data << "\033[0m" << std::endl;
	return (0);
}
