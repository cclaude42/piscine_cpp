/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 16:10:38 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/12 14:11:20 by anonymous        ###   ########.fr       */
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
	std::cout << "First name      : " << book[index].getFirstName() << std::endl;
	std::cout << "Last name       : " << book[index].getLastName() << std::endl;
	std::cout << "Nickname        : " << book[index].getNickName() << std::endl;
	std::cout << "Login           : " << book[index].getLogin() << std::endl;
	std::cout << "Postal address  : " << book[index].getAddress() << std::endl;
	std::cout << "Email           : " << book[index].getEmail() << std::endl;
	std::cout << "Phone number    : " << book[index].getPhone() << std::endl;
	std::cout << "Birthday        : " << book[index].getBirthday() << std::endl;
	std::cout << "Favorite meal   : " << book[index].getMeal() << std::endl;
	std::cout << "Underwear color : " << book[index].getUnderwear() << std::endl;
	std::cout << "Darkest secret  : " << book[index].getSecret() << std::endl;
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
		std::cout << "|" << std::setw(10) << truncate(book[i].getFirstName());
		std::cout << "|" << std::setw(10) << truncate(book[i].getLastName());
		std::cout << "|" << std::setw(10) << truncate(book[i].getNickName());
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
	getline(std::cin, str);
	(*book)[i].setFirstName(str);
	std::cout << "Please enter contact's last name." << std::endl;
	getline(std::cin, str);
	(*book)[i].setLastName(str);
	std::cout << "Please enter contact's nickname." << std::endl;
	getline(std::cin, str);
	(*book)[i].setNickName(str);
	std::cout << "Please enter contact's login." << std::endl;
	getline(std::cin, str);
	(*book)[i].setLogin(str);
	std::cout << "Please enter contact's postal address." << std::endl;
	getline(std::cin, str);
	(*book)[i].setAddress(str);
	std::cout << "Please enter contact's email address." << std::endl;
	getline(std::cin, str);
	(*book)[i].setEmail(str);
	std::cout << "Please enter contact's phone number." << std::endl;
	getline(std::cin, str);
	(*book)[i].setPhone(str);
	std::cout << "Please enter contact's birthday." << std::endl;
	getline(std::cin, str);
	(*book)[i].setBirthday(str);
	std::cout << "Please enter contact's favorite meal." << std::endl;
	getline(std::cin, str);
	(*book)[i].setMeal(str);
	std::cout << "Please enter contact's underwear color." << std::endl;
	getline(std::cin, str);
	(*book)[i].setUnderwear(str);
	std::cout << "Please enter contact's darkest secret." << std::endl;
	getline(std::cin, str);
	(*book)[i].setSecret(str);
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
