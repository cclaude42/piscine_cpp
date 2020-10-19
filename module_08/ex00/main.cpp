/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:37:09 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/19 17:35:05 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int	main(void)
{
	std::vector<int>	vec;
	std::list<int>		lst;
	std::deque<int>		deq;

	for ( int i = 0 ; i < 10 ; i++ )
	{
		vec.push_back(i);
		lst.push_back(i);
		deq.push_back(i);
	}

	int		pos;

	std::cout << "Vectors :" << std::endl << std::endl;
	try
	{
		pos = easyfind(vec, 4);
		std::cout << "Found " << 4 << " in vector at position " << pos << std::endl;
		pos = easyfind(vec, 8);
		std::cout << "Found " << 8 << " in vector at position " << pos << std::endl;
		pos = easyfind(vec, 12);
		std::cout << "Found " << 12 << " in vector at position " << pos << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl << "==================================" << std::endl << std::endl;



	std::cout << "Lists :" << std::endl << std::endl;
	try
	{
		pos = easyfind(lst, 4);
		std::cout << "Found " << 4 << " in vector at position " << pos << std::endl;
		pos = easyfind(lst, 8);
		std::cout << "Found " << 8 << " in vector at position " << pos << std::endl;
		pos = easyfind(lst, 12);
		std::cout << "Found " << 12 << " in vector at position " << pos << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl << "==================================" << std::endl << std::endl;



	std::cout << "Deques :" << std::endl << std::endl;
	try
	{
		pos = easyfind(deq, 4);
		std::cout << "Found " << 4 << " in vector at position " << pos << std::endl;
		pos = easyfind(deq, 8);
		std::cout << "Found " << 8 << " in vector at position " << pos << std::endl;
		pos = easyfind(deq, 12);
		std::cout << "Found " << 12 << " in vector at position " << pos << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what( << std::endl);
	}


	return (0);
}
