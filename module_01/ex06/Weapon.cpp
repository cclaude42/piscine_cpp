/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 16:27:50 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 16:40:04 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::getType(void)
{
	std::string	&ref = _type;
	return (ref);
}

void				Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::Weapon(std::string type)
{
	_type = type;
}
