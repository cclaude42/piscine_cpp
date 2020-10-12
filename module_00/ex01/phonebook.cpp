/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 14:12:40 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/12 14:19:38 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void		Contact::setFirstName(std::string str)
{
	_firstname = str;
}

void		Contact::setLastName(std::string str)
{
	_lastname = str;
}

void		Contact::setNickName(std::string str)
{
	_nickname = str;
}

void		Contact::setLogin(std::string str)
{
	_login = str;
}

void		Contact::setAddress(std::string str)
{
	_address = str;
}

void		Contact::setEmail(std::string str)
{
	_email = str;
}

void		Contact::setPhone(std::string str)
{
	_phone = str;
}

void		Contact::setBirthday(std::string str)
{
	_birthday = str;
}

void		Contact::setMeal(std::string str)
{
	_meal = str;
}

void		Contact::setUnderwear(std::string str)
{
	_underwear = str;
}

void		Contact::setSecret(std::string str)
{
	_secret = str;
}

std::string	Contact::getFirstName(void)
{
	return (_firstname);
}

std::string	Contact::getLastName(void)
{
	return (_lastname);
}

std::string	Contact::getNickName(void)
{
	return (_nickname);
}

std::string	Contact::getLogin(void)
{
	return (_login);
}

std::string	Contact::getAddress(void)
{
	return (_address);
}

std::string	Contact::getEmail(void)
{
	return (_email);
}

std::string	Contact::getPhone(void)
{
	return (_phone);
}

std::string	Contact::getBirthday(void)
{
	return (_birthday);
}

std::string	Contact::getMeal(void)
{
	return (_meal);
}

std::string	Contact::getUnderwear(void)
{
	return (_underwear);
}

std::string	Contact::getSecret(void)
{
	return (_secret);
}
