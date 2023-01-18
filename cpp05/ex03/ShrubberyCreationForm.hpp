/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:13:39 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/18 16:42:20 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &targetName);
		ShrubberyCreationForm(const ShrubberyCreationForm &ref);
		~ShrubberyCreationForm();

		void	execute(const Bureaucrat &ref) const;

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &ref);
};

#endif