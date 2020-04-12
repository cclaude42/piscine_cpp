/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 19:47:12 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/12 19:55:59 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void	ZombieHorde::announce(void)
{

}

ZombieHorde::ZombieHorde(int n)
{

}

ZombieHorde::~ZombieHorde(void)
{
	int	i;

	for (i = 0 ; i < n ; i++)
		delete _zombies[i];
	delete [] _zombies;
}
