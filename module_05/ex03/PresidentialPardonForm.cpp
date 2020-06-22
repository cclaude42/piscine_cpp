/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 19:57:38 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/21 19:57:38 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Member functions

void	PresidentialPardonForm::action(void) const
{
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

// Overloaders

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & src)
{
	this->setTarget(src.getTarget());
	return (*this);
}

// Constructors and destructors

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon", 25, 5)
{
	// Wait, that's illegal !
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5)
{
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) : Form(src)
{
	this->setTarget(src.getTarget());
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}
