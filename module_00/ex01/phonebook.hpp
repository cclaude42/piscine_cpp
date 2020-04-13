/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 16:16:44 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 14:09:25 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>

class Contact
{
public:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	login;
	std::string	address;
	std::string	email;
	std::string	phone;
	std::string	birthday;
	std::string	meal;
	std::string	underwear;
	std::string	secret;
};

#endif
