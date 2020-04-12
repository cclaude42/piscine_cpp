/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 18:33:49 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/12 19:29:06 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent	wwz;
	Zombie		*zombie;

	wwz.setZombieType("Water Zombie");

	zombie = wwz.newZombie("Brian");
	zombie->announce();
	delete zombie;
	zombie = wwz.newZombie("Mitch");
	zombie->announce();
	delete zombie;

	cout << endl;
	wwz.setZombieType("Sand Zombie");

	wwz.randomChump();
	wwz.randomChump();
	wwz.randomChump();
	wwz.randomChump();
	wwz.randomChump();

	return (0);
}
