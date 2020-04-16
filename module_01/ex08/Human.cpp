/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 15:02:43 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/16 15:37:40 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Human swings club at " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Human fires arrow at " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Human shouts intimidatingly at " << target << std::endl;
}

typedef void (Human::*func_ptr) (std::string const &);

void	Human::action(std::string const & action_name, std::string const & target)
{
	std::string	actions[3] = {"melee", "ranged", "shout"};
	func_ptr	p[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	int			i;

	for (i = 0 ; i < 3 ; i++)
	{
		if (action_name == actions[i])
			(this->*p[i])(target);
	}
}
