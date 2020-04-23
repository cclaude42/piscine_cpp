/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:27:07 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/23 19:31:34 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy {
public:
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy & src);
	virtual ~Enemy(void);

	Enemy & operator=(const Enemy & src);

	std::string const	getType(void) const;
	int					getHP(void) const;
	virtual void		takeDamage(int dmg);

protected:
	std::string	_type;
	int			_hp;

private:
	Enemy(void);
};

#endif
