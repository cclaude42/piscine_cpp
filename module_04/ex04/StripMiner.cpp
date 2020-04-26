/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 14:55:58 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 15:45:37 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"
#include "IAsteroid.hpp"

// Member functions

void	StripMiner::mine(IAsteroid* target)
{
	std::cout << "* strip mining... got " << target->beMined(this) << "! *" << std::endl;
}

// Overloaders

StripMiner & StripMiner::operator=(const StripMiner & src)
{
	(void)src;
	return (*this);
}

// Constructors and destructors

StripMiner::StripMiner(void)
{
}

StripMiner::StripMiner(const StripMiner & src)
{
	(void)src;
}

StripMiner::~StripMiner(void)
{
}
