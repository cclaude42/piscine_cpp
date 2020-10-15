/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 17:15:10 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/15 18:25:49 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
	AMateria(void);

	std::string		_type;
	unsigned int	_xp;
public:
	AMateria(std::string const & type);
	AMateria(const AMateria & src);
	virtual ~AMateria(void);

	AMateria & operator=(const AMateria & src);

	std::string const &		getType(void) const; //Returns the materia type
	unsigned int			getXP(void) const; //Returns the Materia's XP
	void					progress(void);
	void					reset(void);

	virtual AMateria*		clone(void) const = 0;
	virtual void			use(ICharacter& target) = 0;
};

#endif
