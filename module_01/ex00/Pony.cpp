/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 17:33:48 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 14:06:18 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::feed(void)
{
	if (_hungry)
	{
		std::cout << "    You feed " << _name << " an apple." << std::endl;
		_hungry = false;
	}
	else
		std::cout << "    " << _name << " isn't hungry." << std::endl;
}

Pony::Pony(std::string name)
{
	_name = name;
	_hungry = true;
	std::cout << "    Say hello to " << _name << " !"<< std::endl;
}

Pony::~Pony(void)
{
	std::cout << "    Say goodbye to " << _name << "..."<< std::endl;
}
