/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 12:30:06 by cclaude           #+#    #+#             */
/*   Updated: 2020/08/17 12:41:31 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int	main(void)
{
	void	*ptr;
	Data	*data;

	srand(time(0));

	ptr = serialize();

	data = deserialize(ptr);

	std::cout << "Data translates to :" << std::endl;
	std::cout << "s1 : " << data->s1 << std::endl;
	std::cout << "n : " << data->n << std::endl;
	std::cout << "s2 : " << data->s2 << std::endl;

	delete (char *)ptr;
	delete data;

	return (0);
}
