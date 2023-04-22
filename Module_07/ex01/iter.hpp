/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 23:42:19 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/22 18:52:12 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

void	ft_add(int &x);

template <typename T>
void	my_func(T &x)
{
	x--;
}
template <typename T>
void    iter(T *a, int lenght, void (*f)(T &x))
{
	int	aux = 0;

	while (aux < lenght)
	{
		f(a[aux]);
		aux++;
	}
}

#endif


























int tos(T *a, size_t len, void (*funk)(&T b))
{
	char	*a = "hello";
	int i = 0;
	while (i < len){
		funk(a[i]);
		i++;
	}
}








