/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 18:33:49 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/12 20:30:52 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main(void)
{
	ZombieHorde	*wwz;

	wwz = new ZombieHorde(10);
	wwz->announce();
	delete wwz;

	wwz = new ZombieHorde(0);
	wwz->announce();
	delete wwz;

	return (0);
}
