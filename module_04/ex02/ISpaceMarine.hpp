/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 14:29:00 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/24 14:29:37 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <iostream>

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine(void) {}
	virtual ISpaceMarine*	clone(void) const = 0;
	virtual void			battleCry(void) const = 0;
	virtual void			rangedAttack(void) const = 0;
	virtual void			meleeAttack(void) const = 0;
};

#endif
