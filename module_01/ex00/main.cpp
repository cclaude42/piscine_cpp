/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 16:59:17 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 14:06:18 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(std::string name)
{
	Pony	*p;

	std::cout << "Before scope" << std::endl;
	if (true)
	{
		p = new Pony(name);
		p->feed();
	}
	std::cout << "After scope" << std::endl;
	delete p;
}
void	ponyOnTheStack(std::string name)
{
	std::cout << "Before scope" << std::endl;
	if (true)
	{
		Pony	p(name);
		p.feed();
	}
	std::cout << "After scope" << std::endl;
}

int	main(void)
{
	ponyOnTheStack("Stacker");
	std::cout << std::endl;
	ponyOnTheHeap("Heaper");
	return (0);
}
