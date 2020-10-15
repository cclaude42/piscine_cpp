/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:11:11 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/15 19:13:27 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"

int	main(void)
{
	CentralBureaucracy	center;
	std::string			targets [20] = { "Demetrius", "Adolfo", "Cyril", "Ivory",
	"Emmanuel", "Chi", "Damion", "Major", "Keenan", "Graig", "Jess", "Arlie",
	"Rudy", "Chet", "Adrian", "Palmer", "Sylvester", "Erasmo", "Emanuel", "Zane" };

	srand(time(0));

	for (int i = 0 ; i < 42 ; i++ )
	{
		Bureaucrat	bureaucrat;

		center.feedBureaucrat(bureaucrat);
	}

	for (int i = 0 ; i < 21 ; i++ )
		center.queueUp(targets[rand() % 20]);

	center.doBureaucracy();

	return (0);
}
