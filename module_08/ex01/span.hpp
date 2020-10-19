/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:30:22 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/19 20:03:18 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <stdio>
# include <algorithm>
# include <vector>

class Storage
{
	Storage(unsigned int n);
	Storage(const Storage & src);
	~Storage(void);

	Storage & operator=(const Storage & src);

	int					getSize(void);
	std::vector<int>	getVect(void);
	void				addNumber(int n);
private:
	unsigned int		_n;
	std::vector<int>	*_vct;
	Storage(void);
}

#endif
