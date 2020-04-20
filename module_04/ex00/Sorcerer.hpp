/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 11:31:00 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/20 12:36:54 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer {
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer & src);
	~Sorcerer(void);

	Sorcerer & operator=(const Sorcerer & src);

	void		polymorph(Victim const & victim) const;
	std::string	getName(void) const;
	std::string	getTitle(void) const;
private:
	Sorcerer(void);

	std::string	_name;
	std::string	_title;
};

std::ostream & operator<<(std::ostream & os, const Sorcerer & src);

#endif
