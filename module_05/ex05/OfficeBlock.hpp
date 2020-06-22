/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:21:57 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/22 18:43:23 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

class OfficeBlock {
public:

	class InternNotSetException : public std::runtime_error
	{
	public:
		InternNotSetException(std::string msg) : std::runtime_error(msg) {}
	};

	class SigneeNotSetException : public std::runtime_error
	{
	public:
		SigneeNotSetException(std::string msg) : std::runtime_error(msg) {}
	};

	class ExecutorNotSetException : public std::runtime_error
	{
	public:
		ExecutorNotSetException(std::string msg) : std::runtime_error(msg) {}
	};

	class UnkownFormException : public std::runtime_error
	{
	public:
		UnkownFormException(std::string msg) : std::runtime_error(msg) {}
	};

	OfficeBlock(void);
	OfficeBlock(Intern * intern, Bureaucrat * signee, Bureaucrat * executor);
	~OfficeBlock(void);

	void	setIntern(Intern * intern);
	void	setSignee(Bureaucrat * signee);
	void	setExecutor(Bureaucrat * executor);
	void	doBureaucracy(std::string form, std::string target);

private:
	Intern *		_intern;
	Bureaucrat *	_signee;
	Bureaucrat *	_executor;
};

#endif
