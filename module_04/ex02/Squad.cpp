/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 13:47:06 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/24 14:49:56 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

// Member functions

int				Squad::getCount(void) const
{
	return (_count);
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n < _count && n >= 0)
		return (_marines[n]);
	else
		return (NULL);
}

int				Squad::push(ISpaceMarine* ptr)
{
	int		i;

	if (ptr == NULL)
		return (_count);
	i = 0;
	while (i < _count)
	{
		if (ptr == _marines[i])
			return (_count);
		i++;
	}

	ISpaceMarine**	new_marines = new ISpaceMarine*[_count + 1];

	i = 0;
	while (i < _count)
	{
		new_marines[i] = _marines[i];
		i++;
	}
	new_marines[i] = ptr;
	if (_count > 0)
		delete [] _marines;
	_marines = new_marines;
	_count++;
	return (_count);
}

// Overloaders

Squad & Squad::operator=(const Squad & src)
{
	int	i;

	i = 0;
	while (i < _count)
		delete _marines[i++];
	if (_count > 0)
		delete [] _marines;

	i = 0;
	_count = src.getCount();
	_marines = new ISpaceMarine*[_count];
	while (i < _count)
	{
		_marines[i] = src.getUnit(i)->clone();
		i++;
	}
	return (*this);
}

// Constructors and destructors

Squad::Squad(void)
{
	_marines = NULL;
	_count = 0;
}

Squad::Squad(const Squad & src)
{
	int	i;

	i = 0;
	_count = src.getCount();
	_marines = new ISpaceMarine*[_count];
	while (i < _count)
	{
		_marines[i] = src.getUnit(i)->clone();
		i++;
	}
}

Squad::~Squad(void)
{
	int	i;

	i = 0;
	while (i < _count)
		delete _marines[i++];
	if (_count > 0)
		delete [] _marines;
}
