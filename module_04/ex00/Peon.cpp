/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 13:11:26 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/20 13:17:57 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

// Member functions



// Overloaders

Peon & Peon::operator=(const Peon & src)
{
	_name = src._name;
	return (*this);
}

// Constructors and destructors

Peon::Peon(void) : Victim()
{
	// Wait, that's illegal !
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon & src) : Victim (src)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}
