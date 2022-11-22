/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:31:54 by ullorent          #+#    #+#             */
/*   Updated: 2022/11/22 16:09:16 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CANONICAL_FIXED_H_
#define CANONICAL_FIXED_H_
#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(int p1);
		Fixed(float p1);
		Fixed(const Fixed& p1);
		~Fixed();

		Fixed &operator=(const Fixed& raw);
		bool operator>(const Fixed& raw) const;
		bool operator<(const Fixed& raw);
		bool operator>=(const Fixed& raw);
		bool operator<=(const Fixed& raw);
		bool operator==(const Fixed& raw);
		bool operator!=(const Fixed& raw);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		int	toInt(void) const;
		float toFloat(void) const;
	private:
		int	_value;
		static const int _bits;
};
std::ostream & operator<<(std::ostream &o, Fixed const &rhs);

#endif