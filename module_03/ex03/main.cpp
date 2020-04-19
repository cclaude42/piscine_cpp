/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 23:53:33 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/19 16:00:26 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
	NinjaTrap	ninja("Nobunaga");
	FragTrap	frag("CU5TM-BT");

	ninja.ninjaShoebox(frag);
}
