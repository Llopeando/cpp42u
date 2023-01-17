/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:14:41 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/17 16:08:34 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// --- Constructors and destructor --- //
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Missingo", 145, 137) {
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref) : AForm(ref.getFormName(), ref.getFormGrades(1), ref.getFormGrades(0)) {
	std::cout << "ShrubberyCreationForm COPY constructor called" << std::endl;
	*this = ref;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

// --- Functions --- //
void	ShrubberyCreationForm::execute(const Bureaucrat &ref) const {
	if (this->getFormGrades(1) > 145 || this->getFormGrades(0) > 137)
		throw AForm::GradeForASCIITreeInvalidException();
	else {
		std::string bureaucrat_file_name = ref.getName() + "_shrubbery.tree";
		std::ofstream outfile(bureaucrat_file_name);
		outfile << "            ." << std::endl;
		outfile << "           Ao" << std::endl;
		outfile << "          AAAA" << std::endl;
		outfile << "         AAoAAA" << std::endl;
		outfile << "        AAAAAAAA" << std::endl;
		outfile << "       AAAAAAAoAA" << std::endl;
		outfile << "      AAoAAAAAAAAA" << std::endl;
		outfile << "     AAAAAAoAAAAoAA" << std::endl;
		outfile << "          AAAA" << std::endl;

		outfile.close();
	}
}