/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 22:25:14 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/14 12:45:15 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <cstdlib>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string const & name);
	FragTrap(const FragTrap & src);
	~FragTrap(void);

	FragTrap & operator=(const FragTrap & src);

	void	vaulthunter_dot_exe(std::string const & target);
};

#endif
