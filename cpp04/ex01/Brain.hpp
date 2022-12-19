/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:12:33 by ullorent          #+#    #+#             */
/*   Updated: 2022/12/19 13:29:10 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_
#include <string>
#include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
	private:
		std::string ideas[100];
};

#endif