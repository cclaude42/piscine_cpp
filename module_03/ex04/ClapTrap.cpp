/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 00:38:53 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/19 15:45:21 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << _type << " " << _name << " attacks " << target;
	std::cout << " at range, causing " << _ranged_atk;
	std::cout << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << _type << " " << _name << " attacks " << target;
	std::cout << " at melee, causing " << _melee_atk;
	std::cout << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount -= _dmg_reduc;
	if (amount < 0)
		amount = 0;
	if (_hp < (int)amount)
		amount = _hp;
	_hp -= amount;
	std::cout << _type << " " << _name << " takes ";
	if (amount > 1)
		std::cout << amount << " points of damage!" << std::endl;
	else if (amount == 1)
		std::cout << "1 point of damage!" << std::endl;
	else
		std::cout << "no damage!" << std::endl;
	if (_hp == 0)
		std::cout << _type << " " << _name << "'s done for!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp + (int)amount > _max_hp)
		amount = _max_hp - _hp;
	_hp += amount;
	std::cout << _type << " " << _name << " heals ";
	if (amount > 1)
		std::cout << amount << " hit points!" << std::endl;
	else if (amount == 1)
		std::cout << "1 hit point!" << std::endl;
	else
		std::cout << "nothing!" << std::endl;
	if (_hp == 100)
		std::cout << _type << " " << _name << " is full health!" << std::endl;
}

// Overloaders

ClapTrap & ClapTrap::operator=(const ClapTrap & src)
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

ClapTrap::ClapTrap(void)
{
	srand(time(0));
	std::cout << "<CL4P-TP> Generating Claptrap iteration..." << std::endl;
	_hp = 100;
	_max_hp = 100;
	_nrg = 100;
	_max_nrg = 100;
	_lvl = 1;
	_melee_atk = 30;
	_ranged_atk = 20;
	_dmg_reduc = 5;
	_name = "INAC";
	_type = "<CL4P-TP>";
}

ClapTrap::ClapTrap(int hp, int max_hp, int nrg, int max_nrg, int lvl,
					int melee_atk, int ranged_atk, int dmg_reduc,
					std::string const & name, std::string const & type)
{
	srand(time(0));
	std::cout << "<CL4P-TP> Generating Claptrap iteration..." << std::endl;
	_hp = hp;
	_max_hp = max_hp;
	_nrg = nrg;
	_max_nrg = max_nrg;
	_lvl = lvl;
	_melee_atk = melee_atk;
	_ranged_atk = ranged_atk;
	_dmg_reduc = dmg_reduc;
	_name = name;
	_type = type;
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	srand(time(0));
	std::cout << "<CL4P-TP> Claptrap, duplicating!" << std::endl;
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
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "<CL4P-TP> Aww..." << std::endl;
}
