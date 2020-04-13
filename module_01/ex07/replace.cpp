/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 17:50:26 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 19:49:01 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	replace(std::fstream &file, std::string before, std::string after)
{
	(void)before;
	(void)after;
	std::string	text;
	std::size_t	pos;

	std::getline(file, text, '\0');
	pos = text.find(before);
	if (pos != std::string::npos)
	{
		text.replace(pos, after.size(), after);
	}
	std::cout << text << std::endl;
}

int		main(int ac, char **av)
{
	std::fstream	file;

	if (ac != 4)
	{
		std::cout << "Invalid number of arguments." << std::endl;
		return (1);
	}
	file.open(av[1]);
	if (file.good() == false)
		std::cout << "Invalid file." << std::endl;
	else if (std::strlen(av[2]) == 0)
		std::cout << "First string is empty." << std::endl;
	else if (std::strlen(av[3]) == 0)
		std::cout << "Second string is empty." << std::endl;
	else
	{
		replace(file, av[2], av[3]);
		return (0);
	}
	file.close();
	return (1);
}
