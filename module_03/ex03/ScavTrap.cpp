/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 00:09:51 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/19 15:44:06 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Member functions

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string	challs [5] = { "give your best pudding recipe", "spit over the wall there",
	"beat the crap out of him", "eat skag and live to tell the tale", "get lost"};

	std::cout << _type << " " << _name << " challenges ";
	std::cout << target << " to " << challs[rand() % 5] << "!" << std::endl;
}

// Overloaders

ScavTrap & ScavTrap::operator=(const ScavTrap & src)
{
	_hp = src._hp;
	_max_hp = src._max_hp;
	_nrg = src._nrg;
	_max_nrg = src._max_nrg;
	_lvl = src._lvl;
	_melee_atk = src._melee_atk;
	_ranged_atk = src._ranged_atk;
	_dmg_reduc = src._dmg_reduc;
	_name = src._name;
	_type = src._type;
	return (*this);
}

// Constructors and destructors

ScavTrap::ScavTrap(void) : ClapTrap ()
{
	std::cout << "<5C4V-TP> Scavtrap, ready to serve!" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap (100, 100, 50, 50, 1, 20, 15, 3, name, "<5C4V-TP>")
{
	std::cout << "<5C4V-TP> Scavtrap, ready to serve!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap (src)
{
	std::cout << "<5C4V-TP> Scavtrap, passing on responsibilities!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "<5C4V-TP> I'm too pretty to die!" << std::endl;
}
