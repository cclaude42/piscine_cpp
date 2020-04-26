/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 14:55:58 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 15:46:42 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include <iostream>
# include "IMiningLaser.hpp"

class IAsteroid;

class StripMiner : public IMiningLaser {
public:
	StripMiner(void);
	StripMiner(const StripMiner & src);
	~StripMiner(void);

	StripMiner & operator=(const StripMiner & src);

	void mine(IAsteroid* target);
};

#endif
