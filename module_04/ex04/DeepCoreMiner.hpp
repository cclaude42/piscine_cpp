/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 14:48:43 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 15:46:27 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include <iostream>
# include "IMiningLaser.hpp"

class IAsteroid;

class DeepCoreMiner : public IMiningLaser {
public:
	DeepCoreMiner(void);
	DeepCoreMiner(const DeepCoreMiner & src);
	~DeepCoreMiner(void);

	DeepCoreMiner & operator=(const DeepCoreMiner & src);

	void mine(IAsteroid* target);
};

#endif
