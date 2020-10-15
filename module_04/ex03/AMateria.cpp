/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 17:15:10 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/15 18:26:14 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Member functions

std::string const &		AMateria::getType(void) const
{
	return (_type);
}

unsigned int			AMateria::getXP(void) const
{
	return (_xp);
}

void					AMateria::reset(void)
{
	_xp = 0;
}

void					AMateria::progress(void)
{
	_xp += 10;
}

// Overloaders

AMateria & AMateria::operator=(const AMateria & src)
{
	_xp = src.getXP();
	return (*this);
}

// Constructors and destructors

AMateria::AMateria(void)
{
	// Wait, that's illegal !
}

AMateria::AMateria(std::string const & type)
{
	_type = type;
	_xp = 0;
}

AMateria::AMateria(const AMateria & src)
{
	_type = src.getType();
	_xp = src.getXP();
}

AMateria::~AMateria(void)
{
}
