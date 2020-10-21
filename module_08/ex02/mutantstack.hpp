/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:36:49 by anonymou          #+#    #+#             */
/*   Updated: 2020/10/21 18:10:28 by anonymous        ###   ########.fr       */
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
	MutantStack(const MutantStack & src);
	~MutantStack(void);

	MutantStack	&operator=(const MutantStack & src);

	iterator	begin(void) { return (std::begin(this->c)); };
	iterator	end(void) { return (std::end(this->c)); };
};

#endif
