/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:52:21 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/23 19:30:47 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Member functions

void				Character::recoverAP(void)
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void				Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void				Character::attack(Enemy *enemy)
{
	if (_weapon != NULL && _ap >= _weapon->getAPCost())
	{
		std::cout << _name << " attacks " << enemy->getType() << " with a ";
		std::cout << _weapon->getName() << std::endl;
		_weapon->attack();
		_ap -= _weapon->getAPCost();
		if (_ap < 0)
			_ap = 0;
		enemy->takeDamage(_weapon->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

std::string const	Character::getName(void) const
{
	return (_name);
}

int					Character::getAP(void) const
{
	return (_ap);
}

AWeapon				*Character::getWeapon(void) const
{
	return (_weapon);
}

// Overloaders

Character & Character::operator=(const Character & src)
{
	_name = src._name;
	_ap = src._ap;
	_weapon = src._weapon;
	return (*this);
}

std::ostream &	operator<<(std::ostream & os, const Character & src)
{
	os << src.getName() << " has " << src.getAP() << " AP and ";
	if (src.getWeapon() != NULL)
		os << "wields a " << src.getWeapon()->getName() << std::endl;
	else
		os << "is unarmed" << std::endl;
	return (os);
}

// Constructors and destructors

Character::Character(void)
{
	// Wait, that's illegal !
}

Character::Character(std::string const & name)
{
	_name = name;
	_ap = 40;
	_weapon = NULL;
}

Character::Character(const Character & src)
{
	_name = src._name;
	_ap = src._ap;
	_weapon = src._weapon;
}

Character::~Character(void)
{
}
