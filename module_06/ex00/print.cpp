/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 15:37:19 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/16 15:10:26 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	print_char(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: "<< static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	print_int(int n)
{
	if (n >= 32 && n < 127)
		std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;
	std::cout << "int: " << n << std::endl;
	if (n < 1000000)
	{
		std::cout << "float: "<< static_cast<float>(n) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: "<< static_cast<float>(n) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(n) << std::endl;
	}
}

void	print_float(float f)
{
	if (static_cast<int>(f) >= 32 && static_cast<int>(f) < 127)
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;
	if (f > 2147483647 || f < -2147483648)
		std::cout << "int: out of range" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (f == static_cast<int>(f) && f < 1000000)
	{
		std::cout << "float: "<< f << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: "<< f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
}

void	print_double(double d)
{
	if (static_cast<int>(d) >= 32 && static_cast<int>(d) < 127)
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;
	if (d > 2147483647 || d < -2147483648)
		std::cout << "int: out of range" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (d == static_cast<int>(d) && d < 1000000)
	{
		std::cout << "float: "<< static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: "<< static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}

void	print_nan(std::string nan)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (nan == "nanf" || nan == "nan")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (nan == "+inff" || nan == "+inf")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (nan == "-inff" || nan == "-inf")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

void	print_inv(void)
{
	std::cout << "char: invalid" << std::endl;
	std::cout << "int: invalid" << std::endl;
	std::cout << "float: invalid" << std::endl;
	std::cout << "double: invalid" << std::endl;
}
