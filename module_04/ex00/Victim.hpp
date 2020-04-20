/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 12:12:02 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/20 13:18:48 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim {
public:
	Victim(std::string name);
	Victim(const Victim & src);
	~Victim(void);

	Victim & operator=(const Victim & src);

	void		getPolymorphed(void) const;
	std::string	getName(void) const;
protected:
	Victim(void);

	std::string	_name;
};

std::ostream & operator<<(std::ostream & os, const Victim & src);

#endif
