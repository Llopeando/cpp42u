/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:37:40 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/27 14:23:20 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CANONICAL_FIXED_H_
#define CANONICAL_FIXED_H_
#include <iostream>
#include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(int p1);
		Fixed(const Fixed& p1);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int	_value;
		static const int _bits;
};

#endif //CANONICAL_FIXED_H_