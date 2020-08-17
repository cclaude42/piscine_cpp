/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 11:51:22 by cclaude           #+#    #+#             */
/*   Updated: 2020/08/17 13:16:54 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void	*serialize(void)
{
	std::string		chars = "abcdefghijklmnopqrstuvwxyz0123456789";
	int				n = rand() + rand() + rand() + rand() + rand();
	unsigned char	*raw = new unsigned char[21];

	// std::cout << "Random number : " << n << std::endl;

	raw[8] = (n < 0) ? 128 : 0;
	n = (n < 0) ? -n : n;

	for (int i = 0 ; i <= 20 ; i++)
	{
		if (i == 8)
			raw[i] += n / 256 / 256 / 256 % 256;
		else if (i == 9)
			raw[i] = n / 256 / 256 % 256;
		else if (i == 10)
			raw[i] = n / 256 % 256;
		else if (i == 11)
			raw[i] = n % 256;
		else if (i == 20)
			raw[i] = '\0';
		else
			raw[i] = chars[rand() % 36];
	}

	// std::cout << "Raw content : " << raw << std::endl << std::endl;

	return (raw);
}

Data	*deserialize(void *ptr)
{
	Data			*data = new Data;
	char			*s1 = new char[9];
	char			*s2 = new char[9];
	unsigned char	*raw = (unsigned char *)ptr;
	int				n;

	for (int i = 0 ; i < 9 ; i++)
	{
		s1[i] = raw[i];
		s2[i] = raw[i + 12];
	}
	s1[8] = '\0';
	s2[8] = '\0';

	n = (int)raw[8] % 128 * 256 * 256 * 256;
	n += (int)raw[9] * 256 * 256;
	n += (int)raw[10] * 256;
	n += (int)raw[11];

	n = ((int)raw[8] / 128) ? -n : n;

	data->s1 = s1;
	data->n = n;
	data->s2 = s2;

	delete [] s1;
	delete [] s2;

	return (data);
}
