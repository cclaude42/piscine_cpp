/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 18:22:56 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 14:06:18 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent {
public:
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	void	randomChump(void);
	ZombieEvent(void);
private:
	std::string	_setType;
};

#endif
