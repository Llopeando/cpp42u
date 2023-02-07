/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Void.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:53:21 by ullorent          #+#    #+#             */
/*   Updated: 2023/02/07 18:32:57 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VOID_HPP_
#define VOID_HPP_
#include <iostream>

class Void
{
	public:
		Void();
		Void(std::string &ref);
		virtual ~Void();

		virtual	void DoubleNumber() = 0;
	protected:
		std::string	str;
};

#endif