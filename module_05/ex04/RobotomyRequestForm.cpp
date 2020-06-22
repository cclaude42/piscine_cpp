/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 19:54:16 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/21 19:54:16 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Member functions

void	RobotomyRequestForm::action(void) const
{
	std::cout << "*BZZZ* ... *BZZZ* ... *BZZZZZZZZZZZTT*" << std::endl;
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Couldn't robotomize " << this->getTarget() << "..." << std::endl;
}

// Overloaders

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & src)
{
	this->setTarget(src.getTarget());
	return (*this);
}

// Constructors and destructors

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy Request", 72, 45)
{
	// Wait, that's illegal !
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", 72, 45)
{
	srand(time(0));
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) : Form(src)
{
	srand(time(0));
	this->setTarget(src.getTarget());
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}
