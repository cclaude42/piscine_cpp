/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 15:21:07 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/21 15:21:07 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// Member functions

const std::string	Form::getName() const
{
	return (_name);
}

bool				Form::getStatus() const
{
	return (_signed);
}

int					Form::getSignGrade() const
{
	return (_signGrade);
}

int					Form::getExecGrade() const
{
	return (_execGrade);
}

std::string			Form::getTarget() const
{
	return (_target);
}

void				Form::setTarget(std::string target)
{
	_target = target;
}

void				Form::beSigned(const Bureaucrat & signee)
{
	if (signee.getGrade() > _signGrade)
		throw Form::GradeTooLowException("it requires a higher bureaucrat grade");
	else
		_signed = true;
}

void				Form::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _execGrade)
		throw Form::GradeTooLowException("it requires a higher bureaucrat grade");
	else if (_signed == false)
		throw Form::FormNotSignedException("it needs to be signed");
	else
		this->action();
}

void				Form::action(void) const
{
}

// Overloaders

std::ostream & operator<<(std::ostream & os, const Form & src)
{
	os << src.getName() << " Form, target " << src.getTarget() << ", currently ";
	if (src.getStatus())
		os << "signed !" << std::endl;
	else
		os << "NOT signed." << std::endl;
	os << "( Requires grade " << src.getSignGrade() << " to sign and ";
	os << "grade " << src.getExecGrade() << " to execute. )";
	return (os);
}

Form & Form::operator=(const Form & src)
{
	_signed = src.getStatus();
	return (*this);
}

// Constructors and destructors

Form::Form(void) : _signGrade(150), _execGrade(150)
{
	// Wait, that's illegal !
}

Form::Form(std::string name, int sign, int exec) : _name(name), _signGrade(sign), _execGrade(exec)
{
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException("Grade Too High!");
	else if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException("Grade Too Low!");
	_signed = false;
}

Form::Form(const Form & src) : _name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	_signed = false;
}

Form::~Form(void)
{
}
