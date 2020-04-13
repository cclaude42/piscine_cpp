/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 16:10:38 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 14:09:47 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void		show_contact(Contact *book, int index)
{
	std::cout << "First name      : " << book[index].firstname << std::endl;
	std::cout << "Last name       : " << book[index].lastname << std::endl;
	std::cout << "Nickname        : " << book[index].nickname << std::endl;
	std::cout << "Login           : " << book[index].login << std::endl;
	std::cout << "Postal address  : " << book[index].address << std::endl;
	std::cout << "Email           : " << book[index].email << std::endl;
	std::cout << "Phone number    : " << book[index].phone << std::endl;
	std::cout << "Birthday        : " << book[index].birthday << std::endl;
	std::cout << "Favorite meal   : " << book[index].meal << std::endl;
	std::cout << "Underwear color : " << book[index].underwear << std::endl;
	std::cout << "Darkest secret  : " << book[index].secret << std::endl;
}

void		search_book(Contact *book, int count)
{
	int		i;
	std::string	input;

	if (count == 0)
	{
		std::cout << "No contacts to show." << std::endl << std::endl;
		return ;
	}
	for (i = 0 ; i < count ; i++)
	{
		std::cout << "*********************************************" << std::endl;
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(book[i].firstname);
		std::cout << "|" << std::setw(10) << truncate(book[i].lastname);
		std::cout << "|" << std::setw(10) << truncate(book[i].nickname);
		std::cout << "|" << std::endl;
	}
	std::cout << "*********************************************" << std::endl;
	std::cout << "Select a contact by typing its number." << std::endl << std::endl;
	getline(std::cin, input);
	if (input[0] > '0' && input[0] < '9' && input[1] == '\0')
		show_contact(book, stoi(input) - 1);
	std::cout << std::endl;
}

void		add_book(Contact **book, int i)
{
	std::string	str;

	std::cout << "Please enter contact's first name." << std::endl;
	getline(std::cin, (*book)[i].firstname);
	std::cout << "Please enter contact's last name." << std::endl;
	getline(std::cin, (*book)[i].lastname);
	std::cout << "Please enter contact's nickname." << std::endl;
	getline(std::cin, (*book)[i].nickname);
	std::cout << "Please enter contact's login." << std::endl;
	getline(std::cin, (*book)[i].login);
	std::cout << "Please enter contact's postal address." << std::endl;
	getline(std::cin, (*book)[i].address);
	std::cout << "Please enter contact's email address." << std::endl;
	getline(std::cin, (*book)[i].email);
	std::cout << "Please enter contact's phone number." << std::endl;
	getline(std::cin, (*book)[i].phone);
	std::cout << "Please enter contact's birthday." << std::endl;
	getline(std::cin, (*book)[i].birthday);
	std::cout << "Please enter contact's favorite meal." << std::endl;
	getline(std::cin, (*book)[i].meal);
	std::cout << "Please enter contact's underwear color." << std::endl;
	getline(std::cin, (*book)[i].underwear);
	std::cout << "Please enter contact's darkest secret." << std::endl;
	getline(std::cin, (*book)[i].secret);
	std::cout << std::endl;
}

int			main(void)
{
	Contact	*book;
	std::string	cmd;
	int		i;

	i = 0;
	book = new Contact[8];
	while (1)
	{
		getline(std::cin, cmd);
		if (cmd == "SEARCH")
			search_book(book, i);
		else if (cmd == "ADD")
		{
			if (i < 8)
				add_book(&book, i++);
			else
				std::cout << "Too many contacts, can't add anymore." << std::endl << std::endl;
		}
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "Invalid command." << std::endl << std::endl;
	}
	delete[] book;
	return (0);
}
