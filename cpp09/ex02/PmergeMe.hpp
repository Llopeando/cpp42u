/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:21:48 by ullorent          #+#    #+#             */
/*   Updated: 2023/09/29 14:41:54 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>

class PmergeMe
{
	public:
		/* Constructors and destructor */
		PmergeMe();
		PmergeMe(const PmergeMe &ref);
		~PmergeMe();

		/* Overload operator */
		PmergeMe	operator=(const PmergeMe &ref);

		/* Member functions */
		std::vector<int>	numbersInserter(int number, bool boo);
	private:
		std::vector<int>	numbers;
};
