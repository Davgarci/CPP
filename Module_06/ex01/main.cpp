/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:24:08 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/19 16:47:02 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int			main()
{
	Data		d;
	uintptr_t	i;

	d.n = 9;
	std::cout << d.n << std::endl;
	std::cout << &d << std::endl;

	i = serialize(&d);
	
	Data*		d2 = deserialize(i);
	std::cout << d2->n << std::endl;
	std::cout << d2 << std::endl;

}