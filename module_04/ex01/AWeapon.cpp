/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 17:30:39 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/23 17:59:41 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

// Member functions

std::string const	AWeapon::getName(void) const
{
	return (_name);
}

int					AWeapon::getAPCost(void) const
{
	return (_cost);
}

int					AWeapon::getDamage(void) const
{
	return (_dmg);
}

// Overloaders

AWeapon & AWeapon::operator=(const AWeapon & src)
{
	_name = src._name;
	_cost = src._cost;
	_dmg = src._dmg;
	return (*this);
}

// Constructors and destructors

AWeapon::AWeapon(void)
{
	// Wait, that's illegal !
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	_name = name;
	_cost = apcost;
	_dmg = damage;
}

AWeapon::AWeapon(const AWeapon & src)
{
	_name = src._name;
	_cost = src._cost;
	_dmg = src._dmg;
}

AWeapon::~AWeapon(void)
{
}
