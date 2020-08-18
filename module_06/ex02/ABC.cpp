/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABC.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:54:15 by cclaude           #+#    #+#             */
/*   Updated: 2020/08/18 12:38:57 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABC.hpp"

Base	*generate(void)
{
	int		r = rand() % 3;
	Base	*ptr;

	if (r == 0)
		ptr = new A;
	else if (r == 1)
		ptr = new B;
	else
		ptr = new C;

	// std::cout << (char)(65 + r) << " -> ";

	return (ptr);
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast <A *> (p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast <B *> (p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast <C *> (p))
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	if (dynamic_cast <A *> (&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast <B *> (&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast <C *> (&p))
		std::cout << "C" << std::endl;
}
