/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:59:23 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/21 23:10:46 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

class   Example 
{
    public:
        Example(int n) : _n( n ) { }
	
        int		getN() const;
		void	setN(int n);

        bool	operator==( Example const & wtf )	const;
        bool	operator!=( Example const & wtf )	const;
        bool	operator>( Example const & wtf )	const;
        bool	operator<( Example const & wtf )	const;
        bool	operator>=( Example const & wtf )	const;
        bool	operator<=( Example const & wtf )	const;
    
	private:
        int		_n;
};  

std::ostream &operator<<(std::ostream &os, Example const &a);


template <typename T>
void    swap(T &a, T &b)
{
	T   aux;
	
	aux = a;
	a = b;
	b = aux;
}

template <> void	swap<Example>(Example &a, Example &b);

template <typename T>
T &		min(T &a, T &b) { return (a <= b ? a : b); }

template <typename T>
T &		max(T &a, T &b) { return (a >= b ? a : b); }

#endif