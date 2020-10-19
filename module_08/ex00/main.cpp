/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:37:09 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/19 17:23:02 by anonymous        ###   ########.fr       */
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



	std::cout << "Vectors :" << std::endl << std::endl;
	try
	{
		std::cout << "Found " << 4 << " in vector at position " << easyfind(vec, 4);
		std::cout << "Found " << 8 << " in vector at position " << easyfind(vec, 8);
		std::cout << "Found " << 12 << " in vector at position " << easyfind(vec, 12);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what();
	}
	std::cout << "==================================" << std::endl << std::endl;



	std::cout << "Lists :" << std::endl << std::endl;
	try
	{
		std::cout << "Found " << 4 << " in list at position " << easyfind(lst, 4);
		std::cout << "Found " << 8 << " in list at position " << easyfind(lst, 8);
		std::cout << "Found " << 12 << " in list at position " << easyfind(lst, 12);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what();
	}
	std::cout << "==================================" << std::endl << std::endl;



	std::cout << "Deques :" << std::endl << std::endl;
	try
	{
		std::cout << "Found " << 4 << " in deque at position " << easyfind(deq, 4);
		std::cout << "Found " << 8 << " in deque at position " << easyfind(deq, 8);
		std::cout << "Found " << 12 << " in deque at position " << easyfind(deq, 12);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what();
	}


	return (0);
}
