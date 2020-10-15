/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 13:11:26 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/15 14:59:39 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {
public:
	Peon(void);
	Peon(std::string name);
	Peon(const Peon & src);
	virtual ~Peon(void);

	Peon & operator=(const Peon & src);
};

#endif
