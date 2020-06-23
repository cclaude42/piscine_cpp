/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:21:57 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/23 11:38:15 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

// Member functions

Intern		*OfficeBlock::getIntern(void)
{
	return (_intern);
}

Bureaucrat	*OfficeBlock::getSignee(void)
{
	return (_signee);
}

Bureaucrat	*OfficeBlock::getExecutor(void)
{
	return (_executor);
}

void		OfficeBlock::setIntern(Intern & intern)
{
	if (_intern != 0)
		delete _intern;
	_intern = new Intern(intern);
}

void		OfficeBlock::setSignee(Bureaucrat & signee)
{
	if (_signee != 0)
		delete _signee;
	_signee = new Bureaucrat(signee);
}

void		OfficeBlock::setExecutor(Bureaucrat & executor)
{
	if (_executor != 0)
		delete _executor;
	_executor = new Bureaucrat(executor);
}

void		OfficeBlock::doBureaucracy(std::string form, std::string target)
{
	Form	*form_ptr;

	if (_intern == 0)
		throw OfficeBlock::InternNotSetException("Intern not set !");
	else if (_signee == 0)
		throw OfficeBlock::SigneeNotSetException("Signee not set !");
	else if (_executor == 0)
		throw OfficeBlock::ExecutorNotSetException("Executor not set !");
	form_ptr = _intern->makeForm(form, target);
	if (form_ptr == 0)
		throw OfficeBlock::UnkownFormException("Form type unknown !");
	_signee->signForm(*form_ptr);
	_executor->executeForm(*form_ptr);
}

// Constructors and destructors

OfficeBlock::OfficeBlock(void)
{
	_intern = 0;
	_signee = 0;
	_executor = 0;
}

OfficeBlock::OfficeBlock(Intern & intern, Bureaucrat & signee, Bureaucrat & executor)
{
	_intern = new Intern(intern);
	_signee = new Bureaucrat(signee);
	_executor = new Bureaucrat(executor);
}

OfficeBlock::~OfficeBlock(void)
{
	if (_intern != 0)
		delete _intern;
	if (_signee != 0)
		delete _signee;
	if (_executor != 0)
		delete _executor;
}
