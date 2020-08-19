/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 16:58:40 by cclaude           #+#    #+#             */
/*   Updated: 2020/08/19 12:53:40 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"
#include "Array.cpp"

template <class T>
void	print_array(Array<T> &t)
{
	for (int i = 0 ; i < t.size() ; i++)
		std::cout << t[i] << std::endl;
	std::cout << "----------" << std::endl;
}

int	main(void)
{
	Array<int>	arr(5);

	arr[0] = 4;
	arr[2] = -12;

	std::cout << "A :"<< std::endl;
	print_array(arr);

	Array<int>	brr(5);

	std::cout << "B (empty) :"<< std::endl;
	print_array(brr);
	std::cout << "B (A assignment) :" << std::endl;
	brr = arr;
	print_array(brr);

	Array<int>	crr(arr);

	std::cout << "C (A copy): " << std::endl;
	print_array(crr);

	std::cout << "A (unchanged when B / C changed):" << std::endl;
	brr[1] = -1;
	crr[3] = 5;
	print_array(arr);

	Array<int>	drr(7);

	std::cout << "D (copy of A, different size): " << std::endl;
	drr = arr;
	print_array(drr);

	Array<std::string>	err(3);

	err[1] = "hello";
	err[2] = "world";

	std::cout << "E (string array) :"<< std::endl;
	print_array(err);

	std::cout << "(Commented) A<int> = E<string> (does not compile): " << std::endl;
	// arr = err;

	return (0);
}
