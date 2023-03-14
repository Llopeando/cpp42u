/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:23:17 by ullorent          #+#    #+#             */
/*   Updated: 2023/03/09 12:06:38 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BASE_HPP_
#define	BASE_HPP_
#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
	public:
		virtual	~Base();
	private:
		/* data */
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif