/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:36:20 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/23 18:37:23 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
	SuperMutant(void);
	SuperMutant(const SuperMutant & src);
	~SuperMutant(void);

	SuperMutant & operator=(const SuperMutant & src);

	void	takeDamage(int dmg);
};

#endif
