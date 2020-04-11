/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 16:16:44 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/11 17:58:19 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>

using		std::cin;
using		std::cout;
using		std::endl;
using		std::setw;
using		std::string;

class Contact
{
public:
	string	firstname;
	string	lastname;
	string	nickname;
	string	login;
	string	address;
	string	email;
	string	phone;
	string	birthday;
	string	meal;
	string	underwear;
	string	secret;
};

#endif
