/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 18:36:29 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/16 19:19:10 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
public:
	Fixed ();
	Fixed (const Fixed&);
	~Fixed ();
	Fixed &operator=(const Fixed&);
	int		getRawBits(void);
	void	setRawBits(const int raw);
private:
	int					_fixed;
	static const int	_fractional = 8;
};

#endif
