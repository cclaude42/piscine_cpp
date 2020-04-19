/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 23:53:33 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/19 20:44:32 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	SuperTrap	super("5UP4H-TR4P");

	super.takeDamage(1000);
	super.beRepaired(1000);
	super.meleeAttack("skag");
	super.rangedAttack("badass");
	super.vaulthunter_dot_exe("you");

	// ScavTrap	mitch;
	// super.ninjaShoebox(mitch);
}
