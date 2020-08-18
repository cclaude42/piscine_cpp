/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 16:02:29 by cclaude           #+#    #+#             */
/*   Updated: 2020/08/18 16:02:29 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <iostream>

template <class T>
class Array {
public:
	Array(void);
	Array(unsigned int n);
	Array(const Array & src);
	~Array(void);

	Array	&operator=(const Array & src);
	T		&operator[](unsigned int i);

	int	size(void);

private:
	T				*_arr;
	unsigned int	_size;
};

#endif
