/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Void.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:53:21 by ullorent          #+#    #+#             */
/*   Updated: 2023/02/14 15:38:41 by ullorent         ###   ########.fr       */
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

		virtual	void	DoubleNumber() = 0;
		virtual	void	checkLength() = 0;
		virtual	void	checkException() = 0;
		virtual	bool	checkIsNumber(std::string str) = 0;
	protected:
		std::string	str;
};

#endif