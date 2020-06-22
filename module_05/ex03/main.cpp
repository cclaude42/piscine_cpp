/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:11:11 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/22 17:19:47 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	john("John", 1);
	Intern		intern;
	Form		*form;

	form = intern.makeForm("shrubbery creation", "cozy");

	john.signForm(*form);
	john.executeForm(*form);

	form = intern.makeForm("robotomy request", "Bender");

	john.signForm(*form);
	john.executeForm(*form);

	form = intern.makeForm("presidential pardon", "Jerry Smith");

	john.signForm(*form);
	john.executeForm(*form);

	form = intern.makeForm("nothing", "Jerry Smith");

	// john.signForm(*form);
	// john.executeForm(*form);

	return (0);
}
