/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 15:11:25 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 15:38:13 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

// Member functions

void	MiningBarge::equip(IMiningLaser* laser)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
	{
		if (_tab[i] == nullptr)
		{
			_tab[i] = laser;
			return ;
		}
	}
}

void	MiningBarge::mine(IAsteroid* target) const
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
	{
		if (_tab[i] != nullptr)
			_tab[i]->mine(target);
	}
}

// Overloaders

MiningBarge & MiningBarge::operator=(const MiningBarge & src)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
		_tab[i] = src._tab[i];
	return (*this);
}

// Constructors and destructors

MiningBarge::MiningBarge(void)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
		_tab[i] = nullptr;
}

MiningBarge::MiningBarge(const MiningBarge & src)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
		_tab[i] = src._tab[i];
}

MiningBarge::~MiningBarge(void)
{
}
