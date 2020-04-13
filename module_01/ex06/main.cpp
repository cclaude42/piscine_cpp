/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 16:26:02 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 17:36:30 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);

		bob.attack();
		club.setType("hammer of bonk");
		bob.attack();
	}
	{
		Weapon	club = Weapon("dragon tooth");
		HumanB	jim("Jim");

		jim.setWeapon(club);
		jim.attack();
		club.setType("vibe checker");
		jim.attack();
	}
}
