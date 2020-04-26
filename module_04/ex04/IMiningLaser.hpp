/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 14:46:24 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 15:42:07 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMININGLASER_HPP
# define IMININGLASER_HPP

# include <iostream>

class IAsteroid;

class IMiningLaser
{
public:
	virtual ~IMiningLaser() {}
	virtual void mine(IAsteroid* target) = 0;
};

#endif
