/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:16:01 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/23 18:20:20 by cclaude          ###   ########.fr       */
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
	~PowerFist(void);

	PowerFist & operator=(const PowerFist & src);

	void	attack(void) const;
};

#endif
