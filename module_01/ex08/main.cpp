/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 15:07:40 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/16 15:28:37 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main(void)
{
	Human	john;

	john.action("shout", "crow");
	john.action("ranged", "crow");

	john.action("ranged", "troll");
	john.action("melee", "troll");
	return (0);
}
