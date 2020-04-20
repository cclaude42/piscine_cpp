/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 11:31:00 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/20 12:37:06 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

// Member functions

void		Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

std::string	Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string	Sorcerer::getTitle(void) const
{
	return (this->_title);
}

// Overloaders

Sorcerer & Sorcerer::operator=(const Sorcerer & src)
{
	_name = src._name;
	_title = src._title;
	return (*this);
}

std::ostream &	operator<<(std::ostream & os, const Sorcerer & src)
{
	os << "I am " << src.getName() << ", " << src.getTitle();
	os << ", and I like ponies!" << std::endl;
	return (os);
}

// Constructors and destructors

Sorcerer::Sorcerer(void)
{
	// Wait, that's illegal ! Private member.
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	_name = name;
	_title = title;
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & src)
{
	_name = src._name;
	_title = src._title;
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title << ", is dead. ";
	std::cout << "Consequences will never be the same!" << std::endl;
}
