/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 12:59:08 by cclaude           #+#    #+#             */
/*   Updated: 2020/08/18 13:39:45 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class Array, class Function>
void	iter(Array *arr, int len, Function &f)
{
	for (int i = 0 ; i < len ; i++)
		f(arr[i]);
}

void	iter_string(std::string & s)
{
	s = s + "$";
}

template <class NumType>
void	iter_double(NumType & n)
{
	n = n * 2;
}

int		main(void)
{
	std::string	str[3] = {"baba", "boey", "son"};
	int			tab[5] = {1, 2, 3, 4, 5};
	float		flo[4] = {1.5, 4.7, 3.0, 2.3};
	void		(*func1)(std::string & s);
	void		(*func2)(int & n);
	void		(*func3)(float & n);

	func1 = iter_string;
	func2 = iter_double;
	func3 = iter_double;

	std::cout << str[0] << " | " << str[1] << " | " << str[2] << std::endl;
	std::cout << tab[0] << ", " << tab[1] << ", " << tab[2];
	std::cout << ", " << tab[3] << ", " << tab[4] << std::endl;
	std::cout << flo[0] << " ; " << flo[1] << " ; " << flo[2];
	std::cout << " ; " << flo[3] << std::endl << std::endl;

	::iter(str, 3, func1);
	::iter(tab, 5, func2);
	::iter(flo, 4, func3);

	std::cout << str[0] << " | " << str[1] << " | " << str[2] << std::endl;
	std::cout << tab[0] << ", " << tab[1] << ", " << tab[2];
	std::cout << ", " << tab[3] << ", " << tab[4] << std::endl;
	std::cout << flo[0] << " ; " << flo[1] << " ; " << flo[2];
	std::cout << " ; " << flo[3] << std::endl;

	return (0);
}
