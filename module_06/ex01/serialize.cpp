/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 11:51:22 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/16 16:22:04 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void	*serialize(void)
{
	std::string		chars = "abcdefghijklmnopqrstuvwxyz0123456789";
	Data			*data = new Data;

	data->s1 = chars[rand() % 36] + chars[rand() % 36] + chars[rand() % 36] + chars[rand() % 36]
			+ chars[rand() % 36] + chars[rand() % 36] + chars[rand() % 36] + chars[rand() % 36];
	data->n = rand();
	data->s2 = chars[rand() % 36] + chars[rand() % 36] + chars[rand() % 36] + chars[rand() % 36]
			+ chars[rand() % 36] + chars[rand() % 36] + chars[rand() % 36] + chars[rand() % 36];

	return (reinterpret_cast <void *> (data));
}

Data	*deserialize(void *ptr)
{
	return (reinterpret_cast <Data *> (ptr));
}
