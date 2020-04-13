/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 16:21:16 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 17:13:24 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
public:
	void	attack(void);
	void	setWeapon(Weapon weapon);
	HumanA(std::string name, Weapon &weapon);
private:
	std::string	_name;
	Weapon		&_weapon;
};

#endif
