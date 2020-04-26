/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 18:01:41 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 13:34:02 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {
public:
	Cure(void);
	Cure(const Cure & src);
	~Cure(void);

	Cure & operator=(const Cure & src);

	AMateria*	clone(void) const;
	void		use(ICharacter& target);
};

#endif
