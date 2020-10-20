/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:30:22 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/20 12:20:20 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Storage
{
public:
	Storage(unsigned int n);
	Storage(const Storage & src);
	~Storage(void);

	Storage & operator=(const Storage & src);

	int					getSize(void) const;
	std::vector<int>	getVect(void) const;
	void				addNumber(int n);
	int					shortestSpan(void);
	int					longestSpan(void);
private:
	unsigned int		_n;
	std::vector<int>	*_vct;
	Storage(void);
};
std::ostream & operator<<(std::ostream & os, const Storage & src);

#endif
