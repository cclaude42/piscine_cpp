/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 18:18:28 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 14:05:48 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}
