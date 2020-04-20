/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 12:12:54 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/20 12:58:29 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

// Member functions

void		Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::string	Victim::getName(void) const
{
	return (this->_name);
}

// Overloaders

Victim & Victim::operator=(const Victim & src)
{
	_name = src._name;
	return (*this);
}

std::ostream &	operator<<(std::ostream & os, const Victim & src)
{
	os << "I'm " << src.getName() << " and I like otters!" << std::endl;
	return (os);
}

// Constructors and destructors

Victim::Victim(void)
{
	// Wait, that's illegal ! Private member.
}

Victim::Victim(std::string name)
{
	_name = name;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim & src)
{
	_name = src._name;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}
