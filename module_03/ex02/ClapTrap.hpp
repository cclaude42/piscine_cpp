/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 00:39:26 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/19 00:43:05 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
public:
	ClapTrap(void);
	ClapTrap(std::string const & name);
	ClapTrap(const ClapTrap & src);
	~ClapTrap(void);

	ClapTrap & operator=(const ClapTrap & src);

	void	vaulthunter_dot_exe(std::string const & target);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
private:
	int			_hp;
	int			_max_hp;
	int			_nrg;
	int			_max_nrg;
	int			_lvl;
	int			_melee_atk;
	int			_ranged_atk;
	int			_dmg_reduc;
	std::string	_name;
};

#endif
