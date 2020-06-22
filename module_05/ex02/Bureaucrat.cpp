/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:35:59 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/22 13:37:28 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
		throw Bureaucrat::GradeTooHighException("Grade Too High!");
	_grade--;
}

void				Bureaucrat::decGrade(void)
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException("Grade Too Low!");
	_grade++;
}

void				Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs form " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->getName() << " cannot sign form " << form.getName();
		std::cout << " because " << e.what() << std::endl;
	}
}

void				Bureaucrat::executeForm(Form & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed form " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->getName() << " cannot execute form " << form.getName();
		std::cout << " because " << e.what() << std::endl;
	}
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
	_grade = src.getGrade();
	return (*this);
}

// Constructors and destructors

Bureaucrat::Bureaucrat(void)
{
	// Wait, that's illegal !
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException("Grade Too High!");
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException("Grade Too Low!");
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & src) : _name(src.getName())
{
	_grade = src.getGrade();
}

Bureaucrat::~Bureaucrat(void)
{
}
