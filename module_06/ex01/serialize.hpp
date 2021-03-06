/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 11:48:22 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/16 16:08:16 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# define MIN -2147483648
# define MAX 2147483647

# include <iostream>
# include <cstdlib>
# include <string.h>

struct Data { std::string s1; int n; std::string s2; };

void	*serialize(void);
Data	*deserialize(void *raw);

#endif
