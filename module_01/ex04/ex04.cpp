/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 20:31:51 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/12 20:41:24 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using	std::string;
using	std::cout;
using	std::endl;

int	main(void)
{
	string	str = "HELLO THIS IS BRAIN";
	string	*ptr = &str;
	string	&ref = str;

	cout << str << endl;
	cout << *ptr << endl;
	cout << ref << endl;

	return (0);
}
