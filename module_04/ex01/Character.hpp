/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:52:21 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/23 19:22:54 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
public:
	Character(std::string const & name);
	Character(const Character & src);
	~Character(void);

	Character & operator=(const Character & src);

	void				recoverAP(void);
	void				equip(AWeapon *weapon);
	void				attack(Enemy *enemy);
	std::string const	getName(void) const;
	int					getAP(void) const;
	AWeapon				*getWeapon(void) const;
private:
	Character(void);

	std::string	_name;
	int			_ap;
	AWeapon		*_weapon;
};

std::ostream &	operator<<(std::ostream & os, const Character & src);

#endif
