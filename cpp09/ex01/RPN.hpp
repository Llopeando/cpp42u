/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:51:48 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/31 18:59:00 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP_
#define RPN_HPP_
#include <iostream>
#include <list>

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
		bool	argumentsTaker(std::list<char *> argList);
	private:
		/* Nothing to see here... */
};

#endif