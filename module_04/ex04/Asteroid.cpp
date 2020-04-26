/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 15:00:44 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 15:43:53 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Asteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

// Member functions

std::string	Asteroid::beMined(DeepCoreMiner* laser) const
{
	(void)laser;
	return ("Dragonite");
}

std::string	Asteroid::beMined(StripMiner* laser) const
{
	(void)laser;
	return ("Flavium");
}

std::string	Asteroid::getName(void) const
{
	return ("Asteroid");
}

// Overloaders

Asteroid & Asteroid::operator=(const Asteroid & src)
{
	(void)src;
	return (*this);
}

// Constructors and destructors

Asteroid::Asteroid(void)
{
}

Asteroid::Asteroid(const Asteroid & src)
{
	(void)src;
}

Asteroid::~Asteroid(void)
{
}
