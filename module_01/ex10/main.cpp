/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 17:26:03 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/16 18:22:20 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	std::ifstream	file;
	std::string		text;
	int				i;

	for (i = 0 ; i < ac - 1 ; i++)
	{
		file.open(av[i + 1]);
		if (file.good())
			std::getline(file, text, '\0');
		else
			text = std::string("cat: ") + av[i + 1] + ": No such file or directory\n";
		std::cout << text;
		file.close();
	}
	while (ac == 1)
	{
		std::cin >> text;
		std::cout << text << std::endl;
	}
}
