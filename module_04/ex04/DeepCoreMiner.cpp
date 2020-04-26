/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 14:48:43 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 15:44:51 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"
#include "IAsteroid.hpp"

// Member functions

void	DeepCoreMiner::mine(IAsteroid* target)
{
	std::cout << "* mining deep... got " << target->beMined(this) << "! *" << std::endl;
}

// Overloaders

DeepCoreMiner & DeepCoreMiner::operator=(const DeepCoreMiner & src)
{
	(void)src;
	return (*this);
}

// Constructors and destructors

DeepCoreMiner::DeepCoreMiner(void)
{
}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner & src)
{
	(void)src;
}

DeepCoreMiner::~DeepCoreMiner(void)
{
}
