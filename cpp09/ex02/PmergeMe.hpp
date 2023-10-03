/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:21:48 by ullorent          #+#    #+#             */
/*   Updated: 2023/10/03 17:00:11 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

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
		std::vector<int>	mergeVctr(std::vector<int> left, std::vector<int> right);
	private:
		std::vector<int>	numbers;
};
