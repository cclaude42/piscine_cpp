/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 18:12:23 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/13 18:24:49 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// void	print_tabs(Fixed *num, char *oper, int *prio, int n)
// {
// 	int	x = 0;
//
// 	std::cout << "{ ";
// 	for (x = 0 ; x < n ; x++)
// 		std::cout << num[x] << "   ";
// 	std::cout << num[n] << " }" << std::endl;
//
// 	std::cout << "{   ";
// 	for (x = 0 ; x < n ; x++)
// 		std::cout << oper[x] << "   ";
// 	std::cout << "}" << std::endl;
//
// 	std::cout << "{   ";
// 	for (x = 0 ; x < n ; x++)
// 		std::cout << prio[x] << "   ";
// 	std::cout << "}" << std::endl;
//
// 	std::cout << std::endl;
// }

Fixed	operate(Fixed left, Fixed right, char op)
{
	if (op == '+')
		return (left + right);
	else if (op == '-')
		return (left - right);
	else if (op == '*')
		return (left * right);
	else if (op == '/')
		return (left / right);
	return (0);
}

void	resolve(Fixed *num, char *oper, int *prio, int n)
{
	int	i;
	int	j;
	int	max = 0;

	for (i = 0 ; i < n ; i++)
		if (prio[i] > max)
			max = prio[i];
	while (max >= 0)
	{
		// print_tabs(num, oper, prio, n);
		for (i = 0 ; i < n ; i++)
		{
			if (prio[i] == max)
			{
				num[i + 1] = operate(num[i], num[i + 1], oper[i]);
				for (j = i ; j < n ; j++)
				{
					num[j] = num[j + 1];
					oper[j] = oper[j + 1];
					prio[j] = prio[j + 1];
				}
				n--;
				max++;
				break;
			}
		}
		max--;
	}
	// print_tabs(num, oper, prio, n);
	std::cout << num[0] << std::endl;
}

void	eval_expr(std::string expr, int n)
{
	std::string	token;
	size_t		pos = 0;
	Fixed		num[n + 1];
	char		oper[n];
	int			prio[n];
	int			i = 0;
	int			j = 0;
	int			par = 0;

	while (pos != std::string::npos)
	{
		pos = expr.find(" ");
		token = expr.substr(0, pos);
		if (token == "+" || token == "-")
			prio[j] = par;
		else if (token == "*" || token == "/")
			prio[j] = par + 1;
		if (token == "+" || token == "-" || token == "*" || token == "/")
			oper[j++] = token[0];
		else if (token == "(")
			par += 2;
		else if (token == ")")
			par -= 2;
		else if (token.find('.') == std::string::npos)
			num[i++] = Fixed(atoi(token.c_str()));
		else
			num[i++] = Fixed((float)atof(token.c_str()));
		expr.erase(0, pos + 1);
	}
	resolve(num, oper, prio, n);
}

bool	arg_check(std::string arg)
{
	std::string	token;
	size_t		pos = 0;
	int			par = 0;
	int			prev = 0;

	while (pos != std::string::npos)
	{
		pos = arg.find(" ");
		token = arg.substr(0, pos);
		if (token == "(" && prev == 0)
			prev = 0;
		else if (token.find_first_not_of("0123456789.") == std::string::npos && !prev)
			prev = 1;
		else if ((token == "+" || token == "-" || token == "*" || token == "/") && prev)
			prev = 0;
		else if (token == ")" && prev == 1)
			prev = 1;
		else
			return (false);
		par += (token == "(") ? 1 : 0;
		par -= (token == ")") ? 1 : 0;
		if (par < 0)
			return (false);
		arg.erase(0, pos + 1);
	}
	if (par != 0 || prev == 0)
		return (false);
	return (true);
}


int		main(int ac, char **av)
{
	int	i = 0;
	int	n = 0;

	if (ac == 2 and arg_check(av[1]))
	{
		while (av[1][i])
		{
			if (av[1][i] == '+' || av[1][i] == '-' || av[1][i] == '*' || av[1][i] == '/')
				n++;
			i++;
		}
		eval_expr(av[1], n);
	}
	else
	{
		std::cout << "Invalid arguments. Please use format (with spaces) :" << std::endl;
		std::cout << std::endl << "./eval_expr \"( 18.18 + 3.03 ) * 2\"" << std::endl;
		return (1);
	}
	return (0);
}
