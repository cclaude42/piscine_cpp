/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 18:27:28 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 12:57:00 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter {
public:
	Character(std::string name);
	Character(const Character & src);
	~Character(void);

	Character & operator=(const Character & src);

	std::string const &	getName(void) const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
private:
	Character(void);

	std::string	_name;
	AMateria*	_tab[4];
};

#endif
