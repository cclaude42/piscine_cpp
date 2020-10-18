/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 12:47:21 by cclaude           #+#    #+#             */
/*   Updated: 2020/08/18 12:56:30 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class AnyType>
void	swap(AnyType & a, AnyType & b)
{
	AnyType	tmp(a);

	a = b;
	b = tmp;
}

template <class AnyType>
AnyType	min(AnyType a, AnyType b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <class AnyType>
AnyType	max(AnyType a, AnyType b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

class Awesome {

public:

Awesome( int n ) : _n( n ) {}

int getN(void) const { return (_n); }
bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
private:

int _n;
};
std::ostream & operator<<(std::ostream & os, const Awesome & src) { os << src.getN(); return (os); }

int		main(void)
{
	int	a = 2;
	int	b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	Awesome	e(42);
	Awesome	f(21);

	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min(e, f) << std::endl;
	std::cout << "max( e, f ) = " << ::max(e, f) << std::endl;

	return (0);
}
