/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 14:50:15 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 17:43:47 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain&	Human::getBrain(void)
{
	return (_brain);
}

std::string		Human::identify(void)
{
	return (_brain.identify());
}

Human::Human(void)
{
	const Brain	_brain;

	(void)_brain;
}
