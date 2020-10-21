/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 20:01:45 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/21 15:51:33 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	main(void)
{
	Storage		stor(100004);
	// Shortest should be 0
	// Longest should be 0

	std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
	std::cout << "Longest span : " << stor.longestSpan() << std::endl;

	for (int i = 1 ; i <= 10 ; i++)
		stor.addNumber(i);
	// Shortest should be 1
	// Longest should be 9

	std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
	std::cout << "Longest span : " << stor.longestSpan() << std::endl;

	stor.addNumbers(11, 100000);
	// Shortest should be 1
	// Longest should be 99999

	std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
	std::cout << "Longest span : " << stor.longestSpan() << std::endl;

	stor.addNumber(45673);
	// Shortest should be 0
	stor.addNumber(-100000);
	// Longest should be 200000

	std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
	std::cout << "Longest span : " << stor.longestSpan() << std::endl;

	try
	{
		stor.addNumber(100);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}

	return (0);
}
