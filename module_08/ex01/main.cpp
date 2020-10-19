/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 20:01:45 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/19 21:07:33 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	main(void)
{
	Storage		stor(10);

	for (int i = 1 ; i <= 10 ; i++)
		stor.addNumber(i);

	std::cout << stor;
	std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
	std::cout << "Longest span : " << stor.longestSpan() << std::endl;

	return (0);
}
