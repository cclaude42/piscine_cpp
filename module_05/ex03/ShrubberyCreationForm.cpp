/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 19:00:11 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/15 19:10:59 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Member functions

void	ShrubberyCreationForm::action(void) const
{
	std::ofstream	file;

	file.open((this->getTarget() + "_shruberry").c_str(), std::ofstream::trunc);
	file << ".git                  " << std::endl;
	file << "├───branches          " << std::endl;
	file << "├───hooks             " << std::endl;
	file << "├───info              " << std::endl;
	file << "├───logs              " << std::endl;
	file << "│   └───refs          " << std::endl;
	file << "│       ├───heads     " << std::endl;
	file << "│       └───remotes   " << std::endl;
	file << "│           └───origin" << std::endl;
	file << "├───objects           " << std::endl;
	file << "│   ├───05            " << std::endl;
	file << "│   ├───22            " << std::endl;
	file << "│   ├───37            " << std::endl;
	file << "│   ├───46            " << std::endl;
	file << "│   ├───48            " << std::endl;
	file << "│   ├───4a            " << std::endl;
	file << "│   ├───52            " << std::endl;
	file << "│   ├───56            " << std::endl;
	file << "│   ├───99            " << std::endl;
	file << "│   ├───9d            " << std::endl;
	file << "│   ├───a4            " << std::endl;
	file << "│   ├───a9            " << std::endl;
	file << "│   ├───af            " << std::endl;
	file << "│   ├───b9            " << std::endl;
	file << "│   ├───ba            " << std::endl;
	file << "│   ├───c7            " << std::endl;
	file << "│   ├───d1            " << std::endl;
	file << "│   ├───e3            " << std::endl;
	file << "│   ├───e7            " << std::endl;
	file << "│   ├───info          " << std::endl;
	file << "│   └───pack          " << std::endl;
	file << "└───refs              " << std::endl;
	file << "    ├───heads         " << std::endl;
	file << "    ├───remotes       " << std::endl;
	file << "    │   └───origin    " << std::endl;
	file << "    └───tags          " << std::endl;
	file.close();
}

// Overloaders

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src)
{
	this->setTarget(src.getTarget());
	return (*this);
}

// Constructors and destructors

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery Creation", 145, 137)
{
	// Wait, that's illegal !
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation", 145, 137)
{
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src) : Form(src)
{
	this->setTarget(src.getTarget());
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}
