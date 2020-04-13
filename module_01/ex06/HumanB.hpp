/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 16:25:09 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 17:41:43 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
public:
	void	attack(void);
	void	setWeapon(Weapon &weapon);
	HumanB(std::string name);
private:
	std::string	_name;
	Weapon		*_weapon;
};

#endif
