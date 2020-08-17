/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABC.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:30:19 by cclaude           #+#    #+#             */
/*   Updated: 2020/08/17 16:51:59 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base {
public:
	virtual ~Base(void) {}
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base	*generate(void);
void	identify_from_pointer(Base *p);
void	identify_from_reference(Base &p);

#endif
