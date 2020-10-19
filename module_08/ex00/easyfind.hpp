/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:32:22 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/19 16:09:13 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T, typename S>
int	easyfind(T & container, int n)
{
	typename T::iterator	pos;

	pos = std::find(container.begin(), container.end(), n);

	if (pos == vec.end())
		throw "Can't found element in container !";

	return (*pos);
}

#endif
