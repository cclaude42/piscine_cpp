/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:35:59 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/19 17:51:22 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Member functions

const std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int					Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void				Bureaucrat::incGrade(void)
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void				Bureaucrat::decGrade(void)
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

// Overloaders

std::ostream & operator<<(std::ostream & os, const Bureaucrat & src)
{
	os << src.getName() << ", bureaucrat grade ";
	os << src.getGrade() << ", at your disservice !";
	return (os);
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & src)
{
	_name = src.getName();
	_grade = src.getGrade();
	return (*this);
}

// Constructors and destructors

Bureaucrat::Bureaucrat(void)
{
	// Wait, that's illegal !
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_name = name;
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & src)
{
	_name = src.getName();
	_grade = src.getGrade();
}

Bureaucrat::~Bureaucrat(void)
{
}
