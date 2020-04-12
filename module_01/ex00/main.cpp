/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 16:59:17 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/12 17:47:20 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(string name)
{
	Pony	*p;

	cout << "Before scope" << endl;
	if (true)
	{
		p = new Pony(name);
		p->feed();
	}
	cout << "After scope" << endl;
	delete p;
}
void	ponyOnTheStack(string name)
{
	cout << "Before scope" << endl;
	if (true)
	{
		Pony	p(name);
		p.feed();
	}
	cout << "After scope" << endl;
}

int	main(void)
{
	ponyOnTheStack("Stacker");
	cout << endl;
	ponyOnTheHeap("Heaper");
	return (0);
}
