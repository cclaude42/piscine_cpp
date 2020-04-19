/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 23:53:33 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/19 15:40:43 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	frag("CU5TM-BT");
	ScavTrap	scav("Cluck-Trap");

	scav.meleeAttack("skag");
	scav.rangedAttack("badass");

	scav.takeDamage(60);
	scav.takeDamage(60);
	frag.takeDamage(60);

	frag.beRepaired(70);
	scav.beRepaired(70);

	frag.vaulthunter_dot_exe("you");
	frag.vaulthunter_dot_exe("you");
	scav.challengeNewcomer("you");
	scav.challengeNewcomer("you");
	scav.challengeNewcomer("you");

	ScavTrap	copy("REPLACE ME");

	copy = scav;
	copy.meleeAttack("skag");
}
