/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:36:49 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/21 17:39:59 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	MutantStack(void);
	MutantStack(const Array & src);
	~MutantStack(void);

	MutantStack	&operator=(const MutantStack & src);

	iterator	begin(void);
	iterator	end(void);

	typedef std::deque<T>::iterator iterator;
};

#endif
