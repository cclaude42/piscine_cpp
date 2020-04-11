/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 15:25:41 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/11 15:47:47 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	using	std::cout;
	using	std::endl;
	int		i;
	int		j;

	for (i = 1 ; i < ac ; i++)
	{
		j = 0;
		while (av[i][j])
			cout << char(toupper(av[i][j++]));
	}
	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	cout << endl;
	return (0);
}
