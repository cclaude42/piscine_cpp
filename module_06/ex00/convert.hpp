/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 17:50:55 by cclaude           #+#    #+#             */
/*   Updated: 2020/07/29 15:45:26 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>

int		is_char(std::string input);
int		is_int(std::string input);
int		is_float(std::string input);
int		is_double(std::string input);

void	print_char(char c);
void	print_int(int n);
void	print_float(float f);
void	print_double(double d);
void	print_nan(std::string nan);
void	print_inv(void);

#endif
