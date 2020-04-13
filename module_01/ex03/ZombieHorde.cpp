/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 19:47:12 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 14:06:18 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void	ZombieHorde::announce(void)
{
	int	i;

	for (i = 0 ; i < _num ; i++)
		_zombies[i].announce();
}

ZombieHorde::ZombieHorde(int n)
{
	int		i;
	std::string	names[10] = {"Clark", "Benny", "Simon", "Owen", "Marshall",
					"Rose", "Dominic", "Bjorn", "Paul", "Rudolf"};

	srand(time(0));
	_zombies = new Zombie[n];
	_num = n;
	for (i = 0 ; i < n ; i++)
	{
		_zombies[i]._name = names[rand() % 10];
		_zombies[i]._type = "Regular Zombie";
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] _zombies;
}
