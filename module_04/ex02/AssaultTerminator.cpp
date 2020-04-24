/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 14:37:28 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/24 14:43:50 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

// Member functions

ISpaceMarine*	AssaultTerminator::clone(void) const
{
	ISpaceMarine* ptr = new AssaultTerminator;
	return (ptr);
}

void			AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack(void) const
{
	std::cout <<  "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

// Overloaders

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator & src)
{
	(void)src;
	return (*this);
}

// Constructors and destructors

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator & src)
{
	(void)src;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back..." << std::endl;
}
