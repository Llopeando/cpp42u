/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Void.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:53:44 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/27 16:02:18 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Void.hpp"

// --- Constructors and destructor --- //
Void::Void() {
	//std::cout << "Void constructor called" << std::endl;
}

Void::Void(std::string &ref) : str(ref) {
	//std::cout << "Void STRING constructor called" << std::endl;
}

Void::~Void() {
	//std::cout << "Void destructor called" << std::endl;
}

