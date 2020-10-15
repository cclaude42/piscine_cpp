/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 11:50:40 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/15 14:59:44 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

class Boye : public Victim {
public:
	Boye(void);
	Boye(std::string name) : Victim(name) { std::cout << "Hi..." << std::endl; }
	Boye(const Boye & src) : Victim(src) { std::cout << "Hi..." << std::endl; }
	virtual ~Boye(void) { std::cout << "Bye bye!" << std::endl; }

	Boye & operator=(const Boye & src) { _name = src._name; return (*this); }
};

int	main(void)
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Boye		max("Max");

	std::cout << robert << jim << joe << max;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(max);

	return 0;
}
