/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 17:30:39 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/23 19:31:43 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon {
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon & src);
	virtual ~AWeapon(void);

	AWeapon & operator=(const AWeapon & src);

	std::string const	getName(void) const;
	int					getAPCost(void) const;
	int					getDamage(void) const;
	virtual void		attack(void) const = 0;

protected:
	std::string	_name;
	int			_dmg;
	int			_cost;

private:
	AWeapon(void);
};

#endif
