/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:44:52 by ullorent          #+#    #+#             */
/*   Updated: 2023/03/21 18:35:01 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_
#include <iostream>
#include <string>

template <class T>
class Array
{
	public:
		Array() : arr(NULL), arrSize(0) {
			//std::cout << "\033[1;90mArray (type T) constructor called\033[0m" << std::endl;
		}

		Array(unsigned int n) : arrSize(n) {
			//std::cout << "\033[1;90mArray (type T) SIZE constructor called\033[0m" << std::endl;
			if (n > 0) {
				arr = new T[n];
			}
			else
				throw OutOfBoundsException();
		}

		Array(Array const &ref) {
			*this = ref;
			//std::cout << "\033[1;90mArray (type T) COPY constructor called\033[0m" << std::endl;
		}

		~Array() {
			//std::cout << "\033[1;90mArray (type T) destructor called\033[0m" << std::endl;
			delete this->arr;
		}

		/* Overload assignment operators */
		Array	&operator=(Array const &ref) {
			arrSize = ref.size();
			arr = new T[arrSize];
			for (size_t i = 0; i < arrSize; i++) {
				arr[i] = ref.arr[i];
			}
			//std::cout << "\033[1;90mArray assignment (=) operator called\033[0m" << std::endl;
			return (*this);
		}

		T	&operator[](unsigned int	index) {
			if (index >= arrSize)
				throw OutOfBoundsException();
			return (this->arr[index]);
		}

		/* Functions */
		unsigned int	size() const {
			return (arrSize);
		}

		/* Exceptions */
		class	OutOfBoundsException: public std::exception {
			virtual const char *what() const throw() {
				return ("❌ \033[1;91mOutOfBounds exception\033[0m");
			}
		};

	private:
		T		*arr;
		size_t	arrSize;
};


#endif