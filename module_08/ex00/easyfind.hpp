/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:32:22 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/18 17:59:48 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int	easyfind(T & array, int n)
{
	size_t						size = sizeof(array) / sizeof(array[0]);
	std::vector<typename S>				vec(array, array + size);
	std::vector<typename S>::iterator	pos;

	pos = std::find(vec.begin, vec.end, n);

	if (pos == vec.end)
		throw "Can't found element in container !";

	return (*loc);
}
