/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:27:07 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/23 18:38:05 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

// Member functions

void				Enemy::takeDamage(int dmg)
{
	_hp -= dmg;
	if (_hp < 0)
		_hp = 0;
}

std::string const	Enemy::getType(void) const
{
	return (_type);
}

int					Enemy::getHP(void) const
{
	return (_hp);
}

// Overloaders

Enemy & Enemy::operator=(const Enemy & src)
{
	_hp = src._hp;
	_type = src._type;
	return (*this);
}

// Constructors and destructors

Enemy::Enemy(void)
{
	// Wait, that's illegal !
}

Enemy::Enemy(int hp, std::string const & type)
{
	_hp = hp;
	_type = type;
}

Enemy::Enemy(const Enemy & src)
{
	_hp = src._hp;
	_type = src._type;
}

Enemy::~Enemy(void)
{
}
