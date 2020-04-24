/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 13:47:06 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/24 14:44:47 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {
public:
	Squad(void);
	Squad(const Squad & src);
	~Squad(void);

	Squad & operator=(const Squad & src);

	int				getCount(void) const;
	ISpaceMarine*	getUnit(int n) const;
	int				push(ISpaceMarine* ptr);

private:
	ISpaceMarine**	_marines;
	int				_count;
};

#endif
