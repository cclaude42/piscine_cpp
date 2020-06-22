/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:11:11 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/22 13:42:15 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat				john("John", 1);
	ShrubberyCreationForm	shrub("cozy");
	RobotomyRequestForm		robot("Mike");
	PresidentialPardonForm	pres("Jerry Smith");

	john.executeForm(shrub);

	john.signForm(shrub);
	john.executeForm(shrub);

	john.signForm(robot);
	john.executeForm(robot);

	john.signForm(pres);
	john.executeForm(pres);

	return (0);
}
