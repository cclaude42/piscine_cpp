/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:45:51 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/23 18:46:14 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
	RadScorpion(void);
	RadScorpion(const RadScorpion & src);
	~RadScorpion(void);

	RadScorpion & operator=(const RadScorpion & src);
};

#endif
