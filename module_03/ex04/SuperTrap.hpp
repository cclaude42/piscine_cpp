/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 17:33:07 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/14 19:15:21 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <cstdlib>
# include <iostream>
# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap(void);
	SuperTrap(std::string const & name);
	SuperTrap(const SuperTrap & src);
	~SuperTrap(void);

	SuperTrap & operator=(const SuperTrap & src);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
};

#endif
