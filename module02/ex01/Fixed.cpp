/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 19:19:23 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/17 16:21:48 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int				Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void			Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

int				Fixed::toInt(void) const
{
	return (_value / 256);
}

float			Fixed::toFloat(void) const
{
	return ((float)_value / 256);
}

Fixed &			Fixed::operator=(const Fixed& src)
{
	std::cout << "Assignment operator called" << std::endl;
	_value = src._value;
	return *this;
}

std::ostream &	operator<<(std::ostream& os, const Fixed& src)
{
	os << src.toFloat();
	return (os);
}

Fixed::Fixed (void)
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed (int val)
{
	std::cout << "Int constructor called" << std::endl;
	_value = val * 256;
}

Fixed::Fixed (float val)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(val * 256);
}

Fixed::Fixed (const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = src._value;
}

Fixed::~Fixed (void)
{
	std::cout << "Destructor called" << std::endl;
}
