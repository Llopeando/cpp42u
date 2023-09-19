/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:51:48 by ullorent          #+#    #+#             */
/*   Updated: 2023/09/19 17:45:01 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP_
#define RPN_HPP_
#include <iostream>
#include <stack>
#include <cstring>
#include <sstream>

class RPN
{
	public:
		/* Constructors and destructor */
		RPN();
		RPN(const RPN &ref);
		~RPN();

		/* Overload operator */
		RPN	operator=(const RPN &ref);

		/* Member functions */
		bool	argumentsTaker(std::string str);
		bool	is_operator(char oprtr);
		int		operate(int a, int b, char oprtr);
	private:
		/* Nothing to see here... */
};

#endif