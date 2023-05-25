/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:18:13 by ullorent          #+#    #+#             */
/*   Updated: 2023/05/25 14:25:45 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {
	MutantStack<int>	mstack;

	std::cout << "\033[1;37m--- Basic Stack tests ---\033[0m" << std::endl;
	mstack.push(1);
	mstack.push(2);

	std::cout << "\033[32mⓘ \033[0m MutantStack Top: \033[1:37m" << mstack.top() << "\033[0m" << std::endl;

	std::cout << "(stack first number [" << mstack.top() << "] removed)" << std::endl;
	mstack.pop();

	std::cout << "\033[32mⓘ \033[0m MutantStack Size: \033[1:37m" << mstack.size() << "\033[0m"<< std::endl;

	mstack.push(3);
	mstack.push(4);
	mstack.push(5);
	mstack.push(6);

	/* --- Operator overload test --- */
	MutantStack<int>	copyMstack = mstack;

	std::cout << "\n\033[1;37m--- Self-made Stack Iterator tests ---\033[0m" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator copy_it = copyMstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	MutantStack<int>::iterator copy_ite = copyMstack.end();
	MutantStack<int>::reverse_iterator rev_it = mstack.rbegin();
	MutantStack<int>::reverse_iterator rev_end_it = mstack.rend();

	++it;
	--it;
	std::cout << "\033[33mƨ\033[0m Normal iterator list: \033[1;37m";
	while (it != ite) {
		std::cout << *it << " ";
		++it;
	}
	std::cout << "\033[0m" << std::endl;
	std::cout << "\033[33mƨ\033[0m Reverse iterator list: \033[1;37m";
	while (rev_it != rev_end_it) {
		std::cout << *rev_it << " ";
		++rev_it;
	}
	std::cout << "\033[0m" << std::endl;
	std::cout << "\n\033[33mƨ\033[0m Normal COPY iterator from copied list: \033[1;37m";
	while (copy_it != copy_ite) {
		std::cout << *copy_it << " ";
		++copy_it;
	}
	std::cout << "\033[0m" << std::endl;
	std::stack<int> s(mstack);
	return (0);
}
