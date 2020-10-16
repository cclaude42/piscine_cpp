/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 11:51:22 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/16 16:44:23 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void	*serialize(void)
{
	std::string		s1;
	std::string		s2;
	int				n = rand();
	std::string		chars = "abcdefghijklmnopqrstuvwxyz0123456789";

	for ( int i = 0 ; i < 8 ; i++ )
	{
		s1 += chars[rand() % 36];
		s2 += chars[rand() % 36];
	}

	Data			*data = new Data;

	data->s1 = s1;
	data->n = n;
	data->s2 = s2;

	return (reinterpret_cast <void *> (data));
}

Data	*deserialize(void *ptr)
{
	return (reinterpret_cast <Data *> (ptr));
}
