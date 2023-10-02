/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:21:48 by ullorent          #+#    #+#             */
/*   Updated: 2023/10/02 14:34:38 by ullorent         ###   ########.fr       */
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
		PmergeMe	&operator=(const PmergeMe &ref);

		/* Member functions */
		std::vector<int>	numbersInserter(int number, bool boo);
		std::vector<int>	mergeInsert(std::vector<int> numbers);
		std::vector<int>	mergeVctr(std::vector<int> left, std::vector<int> right, std::vector<int> numbers);
	private:
		std::vector<int>	numbers;
};
