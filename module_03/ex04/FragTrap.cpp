/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 22:24:51 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/14 19:07:09 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Member functions

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	atks [5] = { "tiny death pellets", "snowball stash",
	"ultimate fire of destruction", "weak flick", "basic_combat_algorithm" };

	if (_nrg >= 25)
	{
		_nrg -= 25;
		std::cout << _type << " " << _name << " uses his ";
		std::cout << atks[rand() % 5] << " on " << target << "!" << std::endl;
	}
	else
		std::cout << _type << " " << _name << " is out of energy!" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " throws bolts at " << target;
	std::cout << ", causing " << _ranged_atk;
	std::cout << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " flicks " << target;
	std::cout << ", causing " << _melee_atk;
	std::cout << " points of damage!" << std::endl;
}

// Overloaders

FragTrap & FragTrap::operator=(const FragTrap & src)
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

FragTrap::FragTrap(void) : ClapTrap ()
{
	std::cout << "<FR4G-TP> Fragtrap, starting bootup sequence!" << std::endl;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap (100, 100, 100, 100, 1, 30, 20, 5, name, "<FR4G-TP>")
{
	std::cout << "<FR4G-TP> Fragtrap, starting bootup sequence!" << std::endl;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap (src)
{
	std::cout << "<FR4G-TP> Fragtrap, copying memory board!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "<FR4G-TP> Good thing I don't have a soul!" << std::endl;
}
