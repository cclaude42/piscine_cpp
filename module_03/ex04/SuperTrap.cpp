/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 17:38:14 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/14 19:22:31 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

// Member functions

void	SuperTrap::rangedAttack(std::string const & target)
{
	std::cout << "5C4V-TP " << _name << " shoots laser beam at " << target;
	std::cout << ", causing " << _ranged_atk;
	std::cout << " points of damage!" << std::endl;
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	std::cout << "5C4V-TP " << _name << " bitch slaps " << target;
	std::cout << ", causing " << _melee_atk;
	std::cout << " points of damage!" << std::endl;
}

// Overloaders

SuperTrap & SuperTrap::operator=(const SuperTrap & src)
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

SuperTrap::SuperTrap(void) : ClapTrap()
{
	std::cout << "<5UP3R-TP> Supertrap, ultimate lifeform!" << std::endl;
}

SuperTrap::SuperTrap(std::string const & name) : ClapTrap(100, 100, 120, 120, 1, 60, 30, 5, name, "<5UP3R-TP>")
{
	std::cout << "<5UP3R-TP> Supertrap, ultimate lifeform!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap & src) : ClapTrap(src)
{
	std::cout << "<5UP3R-TP> Supertrap, cloning for greatness!" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "<5UP3R-TP> I'm leaking!" << std::endl;
}
