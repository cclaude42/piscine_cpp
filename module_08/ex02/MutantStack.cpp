/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:34:39 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/21 18:10:46 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

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
