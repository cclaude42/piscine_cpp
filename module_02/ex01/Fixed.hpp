/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 18:36:29 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/17 16:33:40 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed {
public:
	Fixed (void);
	Fixed (int val);
	Fixed (float val);
	Fixed (const Fixed& src);
	~Fixed (void);
	Fixed &		operator=(const Fixed& src);
	float		toFloat(void) const;
	int			toInt(void) const;
	int			getRawBits(void);
	void		setRawBits(const int raw);
private:
	int					_value;
	static const int	_fractional = 8;
};

std::ostream &	operator<<(std::ostream& os, const Fixed& src);

#endif
