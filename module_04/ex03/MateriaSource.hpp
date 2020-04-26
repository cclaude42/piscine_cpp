/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 13:12:34 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 13:22:13 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource & src);
	~MateriaSource(void);

	MateriaSource & operator=(const MateriaSource & src);

	void		learnMateria(AMateria* ptr);
	AMateria*	createMateria(std::string const & type);
private:
	AMateria*	_tab[4];
};

#endif
