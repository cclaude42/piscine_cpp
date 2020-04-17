/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 18:36:29 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/17 14:01:38 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
public:
	Fixed (void);
	Fixed (const Fixed& src);
	~Fixed (void);
	Fixed &	operator=(const Fixed& src);
	int		getRawBits(void);
	void	setRawBits(const int raw);
private:
	int					_value;
	static const int	_fractional = 8;
};

#endif
