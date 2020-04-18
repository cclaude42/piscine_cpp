/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 00:03:42 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/19 00:09:05 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap {
public:
	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap(const ScavTrap & src);
	~ScavTrap(void);

	ScavTrap & operator=(const ScavTrap & src);

	void	challengeNewcomer(std::string const & target);
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
