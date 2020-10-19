/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:36:00 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/19 20:03:50 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

// Member functions

int					Storage::getSize(void)
{
	return (_n);
}

std::vector<int>	Storage::getVect(void)
{
	return (*_vct);
}

void				Storage::addNumber(int n)
{
	_vct.push_back(n);
}

// Overloaders

Storage & Storage::operator=(const Storage & src)
{
	_n = src.getSize();
	if (_vct)
		delete [] _vct;
	_vct = NULL;
	if (_n)
		_vct = new std::vector<int>[_n];
	_vct = src.getVect();
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const Storage & src)
{
	os << "Vector : [ ";
	for (std::vector<int>::iterator & it : src.getVect())
		os << *it << " ";
	os << "]" << std::endl;
	return (os);
}

// Constructors and destructors

Storage::Storage(void)
{
	// Wait, that's illegal !
}

Storage::Storage(unsigned int n) : _n(n), _vct(NULL)
{
	if (n)
		_vct = new std::vector<int>[n];
}

Storage::Storage(const Storage & src)
{
	_n = 0;
	_vct = NULL;
	*this = src;
}

Storage::~Storage(void)
{
	if (_vct)
		delete [] _vct;
}
