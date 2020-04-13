/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 16:19:04 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 16:24:42 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
public:
	const std::string	&getType(void);
	void				setType(std::string type);
	Weapon(std::string type);
private:
	std::string	_type;
};

#endif
