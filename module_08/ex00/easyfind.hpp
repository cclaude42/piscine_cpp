/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:32:22 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/19 17:30:04 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class NotFoundException : public std::runtime_error
{
public:
	GradeTooHighException(std::string msg) : std::runtime_error(msg) {}
};

template <typename T>
int	easyfind(T & container, int n)
{
	typename T::iterator	pos;

	pos = std::find(container.begin(), container.end(), n);

	if (pos == container.end())
		throw NotFoundException("Can't found element in container !");

	return (*pos);
}

#endif
