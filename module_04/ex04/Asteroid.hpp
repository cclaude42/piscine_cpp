/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 15:00:44 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 15:45:56 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROID_HPP
# define ASTEROID_HPP

# include <iostream>
# include "IAsteroid.hpp"

class DeepCoreMiner;
class StripMiner;

class Asteroid : public IAsteroid {
public:
	Asteroid(void);
	Asteroid(const Asteroid & src);
	~Asteroid(void);

	Asteroid & operator=(const Asteroid & src);

	std::string beMined(DeepCoreMiner* laser) const;
	std::string beMined(StripMiner* laser) const;
	std::string getName(void) const;
};

#endif
