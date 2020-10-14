/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 22:25:14 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/14 12:44:43 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <cstdlib>
# include <iostream>

class FragTrap {
public:
	FragTrap(void);
	FragTrap(std::string const & name);
	FragTrap(const FragTrap & src);
	~FragTrap(void);

	FragTrap & operator=(const FragTrap & src);

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
