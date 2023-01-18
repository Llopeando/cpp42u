/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:13:28 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/18 16:42:13 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP_
#define ROBOTOMY_REQUEST_FORM_HPP_
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &targetName);
		RobotomyRequestForm(const RobotomyRequestForm &ref);
		~RobotomyRequestForm();

		void	execute(const Bureaucrat &ref) const;

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &ref);
};

#endif