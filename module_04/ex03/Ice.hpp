/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 17:50:29 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 13:56:56 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {
public:
	Ice(void);
	Ice(const Ice & src);
	~Ice(void);

	Ice & operator=(const Ice & src);

	AMateria*	clone(void) const;
	void		use(ICharacter& target);
};

#endif
