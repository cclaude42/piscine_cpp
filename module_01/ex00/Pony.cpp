/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 17:33:48 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/12 19:29:33 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::feed(void)
{
	if (_hungry)
	{
		cout << "    You feed " << _name << " an apple." << endl;
		_hungry = false;
	}
	else
		cout << "    " << _name << " isn't hungry." << endl;
}

Pony::Pony(string name)
{
	_name = name;
	_hungry = true;
	cout << "    Say hello to " << _name << " !"<< endl;
}

Pony::~Pony(void)
{
	cout << "    Say goodbye to " << _name << "..."<< endl;
}
