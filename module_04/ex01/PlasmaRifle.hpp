/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:04:49 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/15 17:57:45 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
	PlasmaRifle(void);
	PlasmaRifle(const PlasmaRifle & src);
	virtual ~PlasmaRifle(void);

	PlasmaRifle & operator=(const PlasmaRifle & src);

	void	attack(void) const;
};

#endif
