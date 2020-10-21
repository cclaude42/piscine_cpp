/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:13:59 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/21 17:15:25 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int		main(void)
{
	std::cout << "My Stack" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);
	std::cout << s.top() << std::endl;

	MutantStack<int> mstack2(mstack);

	mstack.push(2);
	mstack.push(8);
	mstack.push(12);

	it = mstack2.begin();
	ite = mstack2.end();

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<int> mstack3;

	mstack3 = mstack2;

	it = mstack3.begin();
	ite = mstack3.end();

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "\nTest with List" << std::endl;

	std::list<int> mlist;

	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);

	std::list<int>::iterator itl = mlist.begin();
	std::list<int>::iterator itel = mlist.end();
	++itl;
	--itl;

	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}

	std::list<int> s2(mlist);
	std::cout << s2.back() << std::endl;

	std::list<int> mlist2(mlist);

	mlist.push_back(2);
	mlist.push_back(8);
	mlist.push_back(12);

	itl = mlist2.begin();
	itel = mlist2.end();

	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}

	std::list<int> mlist3;

	mlist3 = mlist2;

	itl = mlist3.begin();
	itel = mlist3.end();

	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	return (0);
}
