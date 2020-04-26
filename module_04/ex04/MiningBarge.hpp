/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 15:11:25 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 15:45:25 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include <iostream>
# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class MiningBarge
{
public:
	MiningBarge(void);
	MiningBarge(const MiningBarge & src);
	~MiningBarge(void);

	MiningBarge & operator=(const MiningBarge & src);

	void equip(IMiningLaser* laser);
	void mine(IAsteroid* target) const;
private:
	IMiningLaser*	_tab[4];
};

#endif
