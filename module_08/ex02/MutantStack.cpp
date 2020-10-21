/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:34:39 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/21 18:06:07 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// Member functions

template <typename T>
iterator	MutantStack::begin(void)
{
	return (std::begin(this->c));
}

template <typename T>
iterator	MutantStack::end(void)
{
	return (std::end(this->c));
}

// Overloaders

template <typename T>
MutantStack	& MutantStack::operator=(const MutantStack & src)
{
	this->c = src.c;
	return (*this);
}

// Constructors and destructors

template <typename T>
MutantStack::MutantStack(void) : std::stack<T>()
{
}

template <typename T>
MutantStack::MutantStack(const MutantStack & src) : std::stack<T>(src)
{
}

template <typename T>
MutantStack::~MutantStack(void)
{
}
