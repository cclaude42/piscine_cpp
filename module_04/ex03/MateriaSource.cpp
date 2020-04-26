/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 13:12:34 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 14:33:24 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Member functions

void		MateriaSource::learnMateria(AMateria* ptr)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
	{
		if (_tab[i] == nullptr)
		{
			_tab[i] = ptr;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
	{
		if (_tab[i] != nullptr && _tab[i]->getType() == type)
			return (_tab[i]->clone());
	}
	return (0);
}

// Overloaders

MateriaSource & MateriaSource::operator=(const MateriaSource & src)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
	{
		if (_tab[i] != nullptr)
			delete _tab[i];
	}
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

MateriaSource::MateriaSource(void)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
		_tab[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource & src)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
	{
		if (src._tab[i] != nullptr)
			_tab[i] = src._tab[i]->clone();
		else
			_tab[i] = nullptr;
	}
}

MateriaSource::~MateriaSource(void)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
	{
		if (_tab[i] != nullptr)
			delete _tab[i];
	}
}
