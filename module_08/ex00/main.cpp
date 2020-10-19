/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:37:09 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/19 17:08:07 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int	main(void)
{
	int					n;
	std::vector<int>	vector{ 10, 20, 30 };

	try
	{
		n = 20;
		std::cout << "Found " << n << " in vector at position " << easyfind(vector, n);
		n = 34;
		std::cout << "Found " << n << " in vector at position " << easyfind(vector, n);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what();
	}

	return (0);
}
