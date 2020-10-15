/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:52:50 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/15 19:11:26 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Member functions

Form *	Intern::makeShrub(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *	Intern::makeRobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *	Intern::makePres(std::string target)
{
	return (new PresidentialPardonForm(target));
}

typedef Form * (Intern::*form_constr) (std::string target);

Form *	Intern::makeForm(std::string form, std::string target)
{
	Form		*object;
	std::string	forms [3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	form_constr	constr [3] = {&Intern::makeShrub, &Intern::makeRobot, &Intern::makePres};

	for (int i = 0 ; i < 3 ; i++ )
	{
		if (form == forms[i])
		{
			object = (this->*constr[i]) (target);
			std::cout << "Intern creates " << forms[i] << "." << std::endl;
			return (object);
		}
	}
	std::cout << "Intern doesn't know what form that is... Silly intern!" << std::endl;
	return (NULL);
}

// Overloaders

Intern & Intern::operator=(const Intern & src)
{
	(void)src;
	return (*this);
}

// Constructors and destructors

Intern::Intern(void)
{
}

Intern::Intern(const Intern & src)
{
	(void)src;
}

Intern::~Intern(void)
{
}
