/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 17:06:13 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/12 18:15:47 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

using	std::string;
using	std::cout;
using	std::endl;

class Pony {
public:
	Pony(std::string name);
	~Pony(void);
	void	feed(void);
private:
	string	_name;
	bool	_hungry;
};

#endif
