/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 00:09:51 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/14 19:12:05 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Member functions

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string	challs [5] = { "give your best pudding recipe", "spit over the wall there",
	"beat the crap out of him", "eat skag and live to tell the tale", "get lost"};

	if (_nrg >= 25)
	{
		_nrg -= 25;
		std::cout << "5C4V-TP " << _name << " challenges ";
		std::cout << target << " to " << challs[rand() % 5] << "!" << std::endl;
	}
	else
		std::cout << "5C4V-TP " << _name << " is out of energy!" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "5C4V-TP " << _name << " shoots revolver at " << target;
	std::cout << ", causing " << _ranged_atk;
	std::cout << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "5C4V-TP " << _name << " swings knife at " << target;
	std::cout << ", causing " << _melee_atk;
	std::cout << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	amount -= _dmg_reduc;
	if (amount < 0)
		amount = 0;
	if (_hp < (int)amount)
		amount = _hp;
	_hp -= amount;
	std::cout << "5C4V-TP " << _name << " takes ";
	if (amount > 1)
		std::cout << amount << " points of damage!" << std::endl;
	else if (amount == 1)
		std::cout << "1 point of damage!" << std::endl;
	else
		std::cout << "no damage!" << std::endl;
	if (_hp == 0)
		std::cout << "5C4V-TP " << _name << "'s done for!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (_hp + (int)amount > _max_hp)
		amount = _max_hp - _hp;
	_hp += amount;
	std::cout << "5C4V-TP " << _name << " heals ";
	if (amount > 1)
		std::cout << amount << " hit points!" << std::endl;
	else if (amount == 1)
		std::cout << "1 hit point!" << std::endl;
	else
		std::cout << "nothing!" << std::endl;
	if (_hp == 100)
		std::cout << "5C4V-TP " << _name << " is full health!" << std::endl;
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
	return (*this);
}

// Constructors and destructors

ScavTrap::ScavTrap(void)
{
	srand(time(0));
	std::cout << "Scavtrap, ready to serve!" << std::endl;
	_hp = 100;
	_max_hp = 100;
	_nrg = 50;
	_max_nrg = 50;
	_lvl = 1;
	_melee_atk = 20;
	_ranged_atk = 15;
	_dmg_reduc = 3;
	_name = "INAC";
}

ScavTrap::ScavTrap(std::string const & name)
{
	srand(time(0));
	std::cout << "Scavtrap, ready to serve!" << std::endl;
	_hp = 100;
	_max_hp = 100;
	_nrg = 50;
	_max_nrg = 50;
	_lvl = 1;
	_melee_atk = 20;
	_ranged_atk = 15;
	_dmg_reduc = 3;
	_name = name;
}

ScavTrap::ScavTrap(const ScavTrap & src)
{
	srand(time(0));
	std::cout << "Scavtrap, passing on responsibilities!" << std::endl;
	_hp = src._hp;
	_max_hp = src._max_hp;
	_nrg = src._nrg;
	_max_nrg = src._max_nrg;
	_lvl = src._lvl;
	_melee_atk = src._melee_atk;
	_ranged_atk = src._ranged_atk;
	_dmg_reduc = src._dmg_reduc;
	_name = src._name;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "I'm too pretty to die!" << std::endl;
}
