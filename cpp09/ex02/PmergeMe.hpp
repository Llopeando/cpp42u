/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:21:48 by ullorent          #+#    #+#             */
/*   Updated: 2023/10/04 15:26:02 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <ctime>
#include <deque>

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
		void				numbersInserter(int number, bool boo);
		std::vector<int>	mergeInsert(std::vector<int> numbers);
		std::vector<int>	mergeVctr(std::vector<int> left, std::vector<int> right);
		std::deque<int>		mergeInsertDq(std::deque<int> numbers);
		std::deque<int>		mergeDq(std::deque<int> left, std::deque<int> right);
	private:
		std::vector<int>	numbers;
		std::deque<int>		dqNumbers;
};

bool	hasDuplicates(std::vector<int> finalList);
