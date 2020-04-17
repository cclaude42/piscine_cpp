/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 18:36:29 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/17 18:07:00 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed {
public:
	// Constructors and destructors
	Fixed (void);
	Fixed (int val);
	Fixed (float val);
	Fixed (const Fixed& src);
	~Fixed (void);

	// Operator overloaders
	Fixed &		operator=(const Fixed& src);

	//  - Comparison operators
	bool		operator>(const Fixed& right) const;
	bool		operator<(const Fixed& right) const;
	bool		operator>=(const Fixed& right) const;
	bool		operator<=(const Fixed& right) const;
	bool		operator==(const Fixed& right) const;
	bool		operator!=(const Fixed& right) const;

	//  - Arithmetic operators
	Fixed		operator+(const Fixed& right);
	Fixed		operator-(const Fixed& right);
	Fixed		operator*(const Fixed& right);
	Fixed		operator/(const Fixed& right);

	//  - Increment operators
	Fixed &		operator++(void);
	Fixed &		operator--(void);
	Fixed		operator++(int);
	Fixed		operator--(int);

	// Member functions
	float		toFloat(void) const;
	int			toInt(void) const;
	int			getRawBits(void) const;
	void		setRawBits(const int raw);

	// "Non-member" functions
	static Fixed & 			min(Fixed & val1, Fixed & val2);
	static Fixed & 			max(Fixed & val1, Fixed & val2);
	static const Fixed & 	min(const Fixed & val1, const Fixed & val2);
	static const Fixed & 	max(const Fixed & val1, const Fixed & val2);

private:
	int					_value;
	static const int	_fractional = 8;
};

std::ostream &	operator<<(std::ostream& os, const Fixed& src);

#endif
