/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:36:49 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/21 19:51:57 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::deque<T>::iterator iterator;

	MutantStack(void);
	MutantStack(const MutantStack & src) : std::stack<T>(src) {}
	~MutantStack(void) {}

	MutantStack	&operator=(const MutantStack & src) { this->c = src.c; return (*this); }

	iterator	begin(void) { return (this->c.begin()); }
	iterator	end(void) { return (this->c.end()); }
};

#endif
