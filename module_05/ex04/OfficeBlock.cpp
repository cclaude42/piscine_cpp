/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:21:57 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/22 18:31:21 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

// Member functions

void	OfficeBlock::setIntern(Intern * intern)
{
	_intern = intern;
}

void	OfficeBlock::setSignee(Bureaucrat * signee)
{
	_signee = signee;
}

void	OfficeBlock::setExecutor(Bureaucrat * executor)
{
	_executor = executor;
}

void	OfficeBlock::doBureaucracy(std::string form, std::string target)
{
	Form	*form_ptr;

	if (_intern == 0 || _signee == 0 || _executor == 0)
	{
		std::cout << "Can't do bureaucracy without ";
		if (_intern == 0)
			std::cout << "an intern !" << std::endl;
		else if (_signee == 0)
			std::cout << "a signee !" << std::endl;
		else if (_executor == 0)
			std::cout << "an executor !" << std::endl;
		return ;
	}
	form_ptr = _intern->makeForm(form, target);
	if (form_ptr != 0)
	{
		_signee->signForm(*form_ptr);
		_executor->executeForm(*form_ptr);
	}
}

// Constructors and destructors

OfficeBlock::OfficeBlock(void)
{
	_intern = 0;
	_signee = 0;
	_executor = 0;
}

OfficeBlock::OfficeBlock(Intern * intern, Bureaucrat * signee, Bureaucrat * executor)
{
	_intern = intern;
	_signee = signee;
	_executor = executor;
}

OfficeBlock::~OfficeBlock(void)
{
}
