/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:37:09 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/18 17:41:56 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

int	main(void)
{
	int	arr[5] = { 1, 2, 3, 4, 5 };

	std::cout << "Found " << 3 << " at position " << easyfind(arr, 3) << std::endl;

	try
	{
		std::cout << "Found " << 6 << " at position " << easyfind(arr, 6) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Caught exception : " << e.what() << std::endl;
	}

	return (0);
}
