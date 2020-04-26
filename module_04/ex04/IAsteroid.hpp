/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 14:57:33 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 15:47:21 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <iostream>

class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
public:
	virtual ~IAsteroid() {}
	virtual std::string beMined(DeepCoreMiner* laser) const = 0;
	virtual std::string beMined(StripMiner* laser) const = 0;
	virtual std::string getName(void) const = 0;
};

#endif
