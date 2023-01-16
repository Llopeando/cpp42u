/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:14:41 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/16 17:46:26 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

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
void	ShrubberyCreationForm::asciiTree(const Bureaucrat &ref) const {
	if (this->getFormGrades(1) < ref.getGrade() || this->getFormGrades(0) < ref.getGrade())
		throw AForm::GradeForASCIITreeInvalidException();
	else {
		std::ofstream outfile("<target>_shrubbery.tree");
		outfile << "Test" << std::endl;
		outfile << "It" << std::endl;
		outfile << "probably" << std::endl;
		outfile << "works!" << std::endl;

		outfile.close();
	}
}