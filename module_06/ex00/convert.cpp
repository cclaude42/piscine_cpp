/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 13:03:03 by cclaude           #+#    #+#             */
/*   Updated: 2020/07/29 15:44:40 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	convert(std::string input)
{
	if (is_char(input))
		print_char((int)input[0]);
	else if (is_int(input))
		print_int(stoi(input));
	else if (is_float(input))
		print_float(stof(input));
	else if (is_double(input))
		print_double(stod(input));
	else if (input == "-inff" || input == "+inff" || input == "nanf"
			|| input == "-inf" || input == "+inf" || input == "nan")
		print_nan(input);
	else
		print_inv();
}

int	main(int ac, char **av)
{
	if (ac == 2)
		convert(av[1]);
	else
		return (1);
	return (0);
}
