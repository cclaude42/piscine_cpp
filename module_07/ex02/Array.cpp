/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 16:02:29 by cclaude           #+#    #+#             */
/*   Updated: 2020/08/19 12:48:43 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

// Member functions

template <class T>
int		Array<T>::size(void) const
{
	return (_size);
}

// Overloaders

template <class T>
Array<T>	& Array<T>::operator=(const Array & src)
{
	for (int i = 0 ; (i < _size && i < src.size()) ; i++)
		_arr[i] = src[i];
	return (*this);
}

template <class T>
T		& Array<T>::operator[](int i) const
{
	if (i < 0 || i >= _size)
		throw std::runtime_error("Out of limits");
	return (_arr[i]);
}

// Constructors and destructors

template <class T>
Array<T>::Array(void)
{
	_size = 0;
	_arr = nullptr;
}

template <class T>
Array<T>::Array(unsigned int n)
{
	T	*ptr = new T();

	_size = (int)n;
	_arr = new T[_size];
	for (int i = 0 ; i < _size ; i++)
		_arr[i] = *ptr;
}

template <class T>
Array<T>::Array(const Array & src)
{
	_size = src.size();
	_arr = new T[_size];
	for (int i = 0 ; i < _size ; i++)
		_arr[i] = src[i];
}

template <class T>
Array<T>::~Array(void)
{
	if (_size)
		delete [] _arr;
}
