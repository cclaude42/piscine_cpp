/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 18:27:28 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 14:05:45 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Member functions

std::string const &	Character::getName(void) const
{
	return (_name);
}

void				Character::equip(AMateria* m)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
	{
		if (_tab[i] == nullptr)
		{
			_tab[i] = m;
			return ;
		}
	}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		_tab[idx] = nullptr;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && _tab[idx] != nullptr)
		_tab[idx]->use(target);
}

// Overloaders

Character & Character::operator=(const Character & src)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
	{
		if (src._tab[i] != nullptr)
			delete _tab[i];
	}
	_name = src._name;
	for (i = 0 ; i < 4 ; i++)
	{
		if (src._tab[i] != nullptr)
			_tab[i] = src._tab[i]->clone();
		else
			_tab[i] = nullptr;
	}
	return (*this);
}

// Constructors and destructors

Character::Character(void)
{
	// Wait, that's illegal !
}

Character::Character(std::string name)
{
	int	i;

	_name = name;
	for (i = 0 ; i < 4 ; i++)
		_tab[i] = nullptr;
}

Character::Character(const Character & src)
{
	int	i;

	_name = src._name;
	for (i = 0 ; i < 4 ; i++)
	{
		if (src._tab[i] != nullptr)
			_tab[i] = src._tab[i]->clone();
		else
			_tab[i] = nullptr;
	}
}

Character::~Character(void)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
	{
		if (_tab[i] != nullptr)
			delete _tab[i];
	}
}