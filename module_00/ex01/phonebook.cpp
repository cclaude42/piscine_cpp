/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 16:10:38 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/11 19:18:31 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

string	truncate(string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void	show_contact(Contact *book, int index)
{
	cout << "First name      : " << book[index].firstname << endl;
	cout << "Last name       : " << book[index].lastname << endl;
	cout << "Nickname        : " << book[index].nickname << endl;
	cout << "Login           : " << book[index].login << endl;
	cout << "Postal address  : " << book[index].address << endl;
	cout << "Email           : " << book[index].email << endl;
	cout << "Phone number    : " << book[index].phone << endl;
	cout << "Birthday        : " << book[index].birthday << endl;
	cout << "Favorite meal   : " << book[index].meal << endl;
	cout << "Underwear color : " << book[index].underwear << endl;
	cout << "Darkest secret  : " << book[index].secret << endl;
}

void	search_book(Contact *book, int count)
{
	int		i;
	string	input;

	if (count == 0)
	{
		cout << "No contacts to show." << endl << endl;
		return ;
	}
	for (i = 0 ; i < count ; i++)
	{
		cout << "*********************************************" << endl;
		cout << "|" << setw(10) << i + 1;
		cout << "|" << setw(10) << truncate(book[i].firstname);
		cout << "|" << setw(10) << truncate(book[i].lastname);
		cout << "|" << setw(10) << truncate(book[i].nickname);
		cout << "|" << endl;
	}
	cout << "*********************************************" << endl;
	cout << "Select a contact by typing its number." << endl << endl;
	getline(cin, input);
	if (input[0] > '0' && input[0] < '9' && input[1] == '\0')
		show_contact(book, stoi(input) - 1);
	cout << endl;
}

void	add_book(Contact **book, int i)
{
	string	str;

	cout << "Please enter contact's first name." << endl;
	getline(cin, (*book)[i].firstname);
	cout << "Please enter contact's last name." << endl;
	getline(cin, (*book)[i].lastname);
	cout << "Please enter contact's nickname." << endl;
	getline(cin, (*book)[i].nickname);
	cout << "Please enter contact's login." << endl;
	getline(cin, (*book)[i].login);
	cout << "Please enter contact's postal address." << endl;
	getline(cin, (*book)[i].address);
	cout << "Please enter contact's email address." << endl;
	getline(cin, (*book)[i].email);
	cout << "Please enter contact's phone number." << endl;
	getline(cin, (*book)[i].phone);
	cout << "Please enter contact's birthday." << endl;
	getline(cin, (*book)[i].birthday);
	cout << "Please enter contact's favorite meal." << endl;
	getline(cin, (*book)[i].meal);
	cout << "Please enter contact's underwear color." << endl;
	getline(cin, (*book)[i].underwear);
	cout << "Please enter contact's darkest secret." << endl;
	getline(cin, (*book)[i].secret);
	cout << endl;
}

int		main(void)
{
	Contact	*book;
	string	cmd;
	int		i;

	i = 0;
	book = new Contact[8];
	while (1)
	{
		getline(cin, cmd);
		if (cmd == "SEARCH")
			search_book(book, i);
		else if (cmd == "ADD")
		{
			if (i < 8)
				add_book(&book, i++);
			else
				cout << "Too many contacts, can't add anymore." << endl << endl;
		}
		else if (cmd == "EXIT")
			break;
		else
			cout << "Invalid command." << endl << endl;
	}
	delete[] book;
	return (0);
}
