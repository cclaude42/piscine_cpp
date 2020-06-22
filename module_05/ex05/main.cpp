/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:11:11 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/22 18:47:20 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int	main(void)
{
	Intern		*intern = new Intern;
	Bureaucrat	*signee = new Bureaucrat("John", 10);
	Bureaucrat	*executor = new Bureaucrat("Jack", 1);

	OfficeBlock	block;

	block.setIntern(intern);
	block.setSignee(signee);
	block.setExecutor(executor);

	try
	{
		block.doBureaucracy("presidential pardon", "Jerry Smith");
	}
	catch (OfficeBlock::UnkownFormException & e)
	{
		std::cout << "Form demanded doesn't match any available form." << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}

	delete intern;
	delete signee;
	delete executor;

	return (0);
}
