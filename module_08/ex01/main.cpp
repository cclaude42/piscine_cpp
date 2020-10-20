/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 20:01:45 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/20 20:38:52 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	main(void)
{
	Storage		stor(100004);

	for (int i = 1 ; i <= 100000 ; i++)
		stor.addNumber(i * 2);

	// Shortest should be 2
	// Longest should be 199998

	std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
	std::cout << "Longest span : " << stor.longestSpan() << std::endl;

	stor.addNumber(45673); // Make shortest span 1
	stor.addNumber(1000000); // Make longest span 999998

	std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
	std::cout << "Longest span : " << stor.longestSpan() << std::endl;

	stor.addNumber(57823); // Make shortest span 0
	stor.addNumber(-1000000); // Make longest span 2000000

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
