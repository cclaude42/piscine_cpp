/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comet.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 15:05:06 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 15:43:59 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Comet.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

// Member functions

std::string	Comet::beMined(DeepCoreMiner* laser) const
{
	(void)laser;
	return ("Meium");
}

std::string	Comet::beMined(StripMiner* laser) const
{
	(void)laser;
	return ("Tartarite");
}

std::string	Comet::getName(void) const
{
	return ("Comet");
}

// Overloaders

Comet & Comet::operator=(const Comet & src)
{
	(void)src;
	return (*this);
}

// Constructors and destructors

Comet::Comet(void)
{
}

Comet::Comet(const Comet & src)
{
	(void)src;
}

Comet::~Comet(void)
{
}
