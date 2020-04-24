/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 13:40:41 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/24 14:45:18 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad(void) {}

	virtual int				getCount(void) const = 0;
	virtual ISpaceMarine*	getUnit(int) const = 0;
	virtual int				push(ISpaceMarine*) = 0;
};

#endif
