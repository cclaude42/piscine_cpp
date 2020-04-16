/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 17:50:26 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/16 13:27:59 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	replace(std::ifstream &file, std::string name, std::string from, std::string to)
{
	std::ofstream	newfile;
	std::string		text;
	std::size_t		pos;
	std::size_t		i = 0;

	newfile.open(name + ".replace", std::ofstream::trunc);
	std::getline(file, text, '\0');
	pos = text.find(from);
	while (pos != std::string::npos)
	{
		while (i != pos)
			newfile << text[i++];
		newfile << to;
		i += from.size();
		pos = text.find(from, i);
	}
	while (i != text.size())
		newfile << text[i++];
}

int		main(int ac, char **av)
{
	std::ifstream	file;

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
		replace(file, av[1], av[2], av[3]);
		return (0);
	}
	file.close();
	return (1);
}
