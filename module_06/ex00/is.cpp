/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 15:33:19 by cclaude           #+#    #+#             */
/*   Updated: 2020/07/29 15:33:45 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int		is_char(std::string input)
{
	int	n = (int)input[0];

	if (input.size() == 1 && ((n >= 32 && n < 48) || (n >= 58 && n < 127)))
		return (1);
	return (0);
}

int		is_int(std::string input)
{
	if (input[0] != '-' && (input[0] < '0' || input[0] > '9'))
		return (0);
	for (int i = 1 ; i < (int)input.size(); i++)
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
	}
	try { stoi(input); }
	catch (std::out_of_range & e) { return (0); }
	return (1);
}

int		is_float(std::string input)
{
	int	i = 0;

	if (input[i] == '-')
		i++;
	if (input[i] == '.')
		return (0);
	while (input[i] != '.')
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
		if (i == (int)input.size())
			return (0);
	}
	i++;
	if (i == (int)input.size() || input[i] == 'f')
		return (0);
	while (input[i] != 'f')
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
		if (i == (int)input.size())
			return (0);
	}
	i++;
	if (i < (int)input.size())
		return (0);
	try { stof(input); }
	catch (std::out_of_range & e) { return (0); }
	return (1);
}

int		is_double(std::string input)
{
	int	i = 0;

	if (input[i] == '-')
		i++;
	if (input[i] == '.')
		return (0);
	while (input[i] != '.')
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
		if (i == (int)input.size())
			return (0);
	}
	i++;
	if (i == (int)input.size())
		return (0);
	while (i != (int)input.size())
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
	}
	try { stod(input); }
	catch (std::out_of_range & e) { return (0); }
	return (1);
}
