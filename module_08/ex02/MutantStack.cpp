/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:34:39 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/21 17:39:27 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// Member functions

iterator	MutantStack::begin(void)
{
	return (std::begin(this->c));
}

iterator	MutantStack::end(void)
{
	return (std::end(this->c));
}

// Overloaders

MutantStack	& MutantStack::operator=(const MutantStack & src)
{
	this->c = src.c;
	return (*this);
}

// Constructors and destructors

MutantStack::MutantStack(void) : std::stack<T>()
{
}

MutantStack::MutantStack(const Array & src) : std::stack<T>(src)
{
}

MutantStack::~MutantStack(void)
{
}
