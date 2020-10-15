/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:16:01 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/15 17:57:41 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
	PowerFist(void);
	PowerFist(const PowerFist & src);
	virtual ~PowerFist(void);

	PowerFist & operator=(const PowerFist & src);

	void	attack(void) const;
};

#endif
