/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 20:01:45 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/20 19:48:56 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	main(void)
{
	Storage		stor(100000);

	for (int i = 1 ; i <= 100001 ; i++)
	{
		try
		{
			stor.addNumber(i);
		}
		catch (std::exception & e)
		{
			std::cout << "Exception : " << e.what() << std::endl;
		}
	}

	std::cout << stor;
	std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
	std::cout << "Longest span : " << stor.longestSpan() << std::endl;

	return (0);
}
