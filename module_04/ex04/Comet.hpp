/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comet.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 15:05:06 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 15:46:05 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMET_HPP
# define COMET_HPP

# include <iostream>
# include "IAsteroid.hpp"

class DeepCoreMiner;
class StripMiner;

class Comet : public IAsteroid {
public:
	Comet(void);
	Comet(const Comet & src);
	~Comet(void);

	Comet & operator=(const Comet & src);

	std::string beMined(DeepCoreMiner* laser) const;
	std::string beMined(StripMiner* laser) const;
	std::string getName(void) const;
};

#endif
