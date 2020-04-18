/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 23:53:33 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/19 00:26:04 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	frag("CU5TM-BT");

	frag.meleeAttack("skag");
	frag.rangedAttack("badass");

	frag.takeDamage(60);
	frag.takeDamage(60);

	frag.beRepaired(60);
	frag.beRepaired(60);

	frag.vaulthunter_dot_exe("Jack");
	frag.vaulthunter_dot_exe("Jack");
	frag.vaulthunter_dot_exe("Jack");
}
