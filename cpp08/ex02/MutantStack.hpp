/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:13:27 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/25 16:18:36 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
	public:
		/* Constructors and destructor */
		MutantStack() : std::stack<T>() {
			// std::cout << "MutantStack constructor called" << std::endl;
		}
		MutantStack(const MutantStack &ref) { 
			*this = ref;
			// std::cout << "MutantStack COPY constructor called" << std::endl;
		}
		~MutantStack() {
			// std::cout << "MutantStack destructor called" << std::endl;
		}

		/* Overload operator */
		MutantStack &operator=(const MutantStack &ref) {
			if (this != &ref)
				std::stack<T>::operator=(ref);
			std::cout << "\033[31mⓘ  \033[33mMutantStack (=) operator overload called\033[0m" << std::endl;
			return (*this);
		}

		/* Definitions */
		typedef typename	Container::iterator					iterator;
		typedef typename	Container::const_iterator			const_iterator;
		typedef typename	Container::reverse_iterator			reverse_iterator;
		typedef typename	Container::const_reverse_iterator	const_reverse_iterator;

		/* Member functions definitions from iterators */
		iterator begin() { return (this->c.begin()); }
		iterator end() { return (this->c.end()); }
		const_iterator cbegin() const { return (this->c.cbegin()); }
		const_iterator cend() const { return (this->c.cend()); }
		reverse_iterator rbegin() { return (this->c.rbegin()); }
		reverse_iterator rend() { return (this->c.rend()); }
		const_reverse_iterator crbegin() const { return (this->c.crbegin()); }
		const_reverse_iterator crend() const { return (this->c.crend()); }
};

#endif