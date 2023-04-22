/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:58:58 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/21 23:08:48 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "whatever.hpp"

bool	        Example::operator==( Example const & wtf )	const { return (this->_n == wtf._n); }
bool	        Example::operator!=( Example const & wtf )	const { return (this->_n != wtf._n); }
bool	        Example::operator>( Example const & wtf )	const { return (this->_n > wtf._n); }
bool	        Example::operator<( Example const & wtf )	const { return (this->_n < wtf._n); }
bool	        Example::operator>=( Example const & wtf )	const { return (this->_n >= wtf._n); }
bool	        Example::operator<=( Example const & wtf )	const { return (this->_n <= wtf._n); }

int		        Example::getN() const	{ return this->_n; };
void	        Example::setN(int n)			{ this->_n = n; }

std::ostream    &operator<<(std::ostream &os, Example const &a) { os << a.getN(); return os; }

template <>
void	swap<Example>(Example &a, Example &b)
{
	int		n = a.getN();
	
	a.setN(b.getN());
	b.setN(n);
}