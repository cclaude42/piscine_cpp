/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:27:05 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/21 20:02:56 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// Member functions


// Overloaders

template <typename T>
MutantStack	& MutantStack<T>::operator=(const MutantStack & src)
{
	this->c = src.c;
	return (*this);
}

// Constructors and destructors

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack & src) : std::stack<T>(src)
{
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
}
