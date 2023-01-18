/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:14:41 by ullorent          #+#    #+#             */
/*   Updated: 2023/01/18 16:54:34 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// --- Constructors and destructor --- //
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("MissingoShrubbery", 145, 137) {
	//std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &targetName) : AForm(targetName, 145, 137) {
	//std::cout << "ShrubberyCreationForm NAME constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref) {
	//std::cout << "ShrubberyCreationForm COPY constructor called" << std::endl;
	*this = ref;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	//std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

// --- Overload operator --- //
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref) {
	std::cout << "ShrubberyCreationForm assignation (=) operator called" << std::endl;
	ref.getBoolVal();
	return (*this);
}

// --- Functions --- //
void	ShrubberyCreationForm::execute(const Bureaucrat &ref) const {
	if (this->getFormGrades(1) >= 146 || this->getFormGrades(0) >= 138)
		throw AForm::GradeActionInvalidException();
	else {
		std::string bureaucrat_file_name = ref.getName() + "_shrubbery.tree";
		std::ofstream outfile(bureaucrat_file_name);
		outfile << "            ." << std::endl;
		outfile << "           Ao" << std::endl;
		outfile << "          AAAA" << std::endl;
		outfile << "         AAoAAA" << std::endl;
		outfile << "        AAAAAAAA       Merry christmas," << std::endl;
		outfile << "       AAAAAAAoAA      from " << ref.getName() << " ☆" << std::endl;
		outfile << "      AAoAAAAAAAAA" << std::endl;
		outfile << "     AAAAAAoAAAAoAA" << std::endl;
		outfile << "          AAAA" << std::endl;

		outfile.close();
		std::cout << "📂 \033[1;33m" << ref.getName() << " ASCII Tree has been successfully generated in \033[1;37m" << bureaucrat_file_name << "\033[1;33m file\033[0m" << std::endl;
	}
}