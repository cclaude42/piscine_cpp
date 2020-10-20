/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:36:00 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/20 14:39:07 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

// Member functions

int					Storage::getSize(void) const
{
	return (_n);
}

std::vector<int>	Storage::getVect(void) const
{
	return (*_vct);
}

void				Storage::addNumber(int n)
{
	if (_vct->size() >= _n)
		throw std::runtime_error("Container is full !");
	_vct->push_back(n);
}

int					Storage::shortestSpan(void)
{
	std::vector<int>	vect = *_vct;
	int					prev = *vect.begin();
	int					ret = 2147483647;

	if (_vct->size() < 2)
		return (0);
	std::sort(vect.begin(), vect.end());
	for (std::vector<int>::iterator it = vect.begin() + 1 ; it != vect.end() ; it++)
	{
		if (ret > *it - prev)
			ret = *it - prev;
		prev = *it;
	}

	return (ret);
}

int					Storage::longestSpan(void)
{
	std::vector<int>	vect = *_vct;

	if (_vct->size() < 2)
		return (0);
	std::sort(vect.begin(), vect.end());
	return (*(vect.end() - 1) - *vect.begin());
}

// Overloaders

Storage & Storage::operator=(const Storage & src)
{
	if (_vct)
		delete [] _vct;
	_n = src.getSize();
	_vct = NULL;
	if (_n)
		_vct = new std::vector<int>[_n];
	*_vct = src.getVect();
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const Storage & src)
{
	std::vector<int>	vect = src.getVect();

	os << "Vector : [ ";
	for (std::vector<int>::iterator it = vect.begin() ; it != vect.end() ; it++)
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
