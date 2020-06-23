/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 18:50:14 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/23 12:43:50 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

// Member functions

void	CentralBureaucracy::feedBureaucrat(Bureaucrat & bureaucrat)
{
	int		i;

	for ( i = 0 ; i < 20 ; i++ )
	{
		if (_offices[i].getIntern() == 0)
		{
			Intern	intern;
			_offices[i].setIntern(intern);
		}
		if (_offices[i].getSignee() == 0)
		{
			_offices[i].setSignee(bureaucrat);
			// std::cout << bureaucrat << ", has been assigned to office " << i + 1 << std::endl;
			return ;
		}
		if (_offices[i].getExecutor() == 0)
		{
			_offices[i].setExecutor(bureaucrat);
			// std::cout << bureaucrat << ", has been assigned to office " << i + 1 << std::endl;
			return ;
		}
	}
	std::cout << "The offices are full !" << std::endl;
}

void	CentralBureaucracy::queueUp(std::string target)
{
	int		i;

	if (target == "")
		std::cout << "Supply valid target !" << std::endl;
	for ( i = 0 ; i < 20 ; i++ )
	{
		if (_targets[i] == "")
		{
			_targets[i] = target;
			// std::cout << target << " has been queued up..." << std::endl;
			return ;
		}
	}
	std::cout << "The queue is full !" << std::endl;
}

void	CentralBureaucracy::doBureaucracy(void)
{
	std::string	forms [3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for ( int i = 0 ; i < 20 ; i++ )
	{
		std::cout << std::endl << "In office " << i + 1 << " :" << std::endl;
		try
		{
			_offices[i].doBureaucracy(forms[rand() % 3], _targets[i]);
		}
		catch (OfficeBlock::EmptyTargetException & e)
		{
			std::cout << "Office is ready but doesn't have a target !" << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Office isn't ready to do bureaucracy !" << std::endl;
		}
		_targets[i] = "";
	}
}

// Constructors and destructors

CentralBureaucracy::CentralBureaucracy(void)
{
}

CentralBureaucracy::~CentralBureaucracy(void)
{
}
