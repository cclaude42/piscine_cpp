/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:40:49 by cclaude           #+#    #+#             */
/*   Updated: 2020/08/17 16:59:11 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABC.hpp"

int	main(void)
{
	Base	*ptr;

	srand(time(0));

	ptr = generate();
	identify_from_pointer(ptr);
	delete ptr;

	ptr = generate();
	identify_from_pointer(ptr);
	delete ptr;

	ptr = generate();
	identify_from_reference(*ptr);
	delete ptr;

	ptr = generate();
	identify_from_reference(*ptr);
	delete ptr;

	return (0);
}
