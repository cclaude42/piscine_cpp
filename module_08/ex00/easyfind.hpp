/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:32:22 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/18 17:57:08 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename S>
int	easyfind(T & array, int n)
{
	size_t						size = sizeof(array) / sizeof(array[0]);
	std::vector<S>				vec(array, array + size);
	std::vector<S>::iterator	pos;

	pos = std::find(vec.begin, vec.end, n);

	if (pos == vec.end)
		throw "Can't found element in container !";

	return (*loc);
}
