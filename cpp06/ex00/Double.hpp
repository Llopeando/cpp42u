/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:53:51 by ullorent          #+#    #+#             */
/*   Updated: 2023/02/07 18:11:50 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLE_HPP_
#define DOUBLE_HPP_
#include "Void.hpp"

class Double : public Void
{
	public:
		Double();
		Double(std::string &ref);
		~Double();
		
		void	DoubleNumber();
		void	checkLength();
	private:
		int pre;
		double	num;
};

#endif