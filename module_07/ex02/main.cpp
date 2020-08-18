/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 16:58:40 by cclaude           #+#    #+#             */
/*   Updated: 2020/08/18 17:56:26 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"
#include "Array.cpp"

int	main(void)
{
	Array<int>	arr(5);

	std::cout << arr[0] << std::endl;
	std::cout << arr[1] << std::endl;
	std::cout << arr[2] << std::endl;
	std::cout << arr[3] << std::endl;
	std::cout << arr[4] << std::endl;

	Array<std::string>	brr(5);

	std::cout << brr[0] << std::endl;
	std::cout << brr[1] << std::endl;
	std::cout << brr[2] << std::endl;
	std::cout << brr[3] << std::endl;
	std::cout << brr[4] << std::endl;

	return (0);
}
