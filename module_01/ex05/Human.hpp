/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 14:44:35 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/13 15:19:34 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {
public:
	std::string	identify(void);
	const Brain	&getBrain(void);
	Human(void);
	// ~Human(void);
private:
	const Brain	_brain;
};

#endif
