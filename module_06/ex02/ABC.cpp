/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABC.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:54:15 by cclaude           #+#    #+#             */
/*   Updated: 2020/08/17 16:58:28 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABC.hpp"

Base	*generate(void)
{
	Base	*ptr = new Base;

	return (ptr);
}

void	identify_from_pointer(Base *p)
{
	(void)p;
}

void	identify_from_reference(Base &p)
{
	(void)p;
}
