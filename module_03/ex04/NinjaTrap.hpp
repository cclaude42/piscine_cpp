/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 15:48:04 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/19 20:16:03 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
public:
	NinjaTrap(void);
	NinjaTrap(std::string const & name);
	NinjaTrap(const NinjaTrap & src);
	~NinjaTrap(void);

	NinjaTrap & operator=(const NinjaTrap & src);

	void	ninjaShoebox(const ClapTrap & target);
	void	ninjaShoebox(const FragTrap & target);
	void	ninjaShoebox(const ScavTrap & target);
	void	ninjaShoebox(const NinjaTrap & target);
};

#endif
