/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:47:06 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/19 16:47:54 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	rtrn;
	void*		aux;

	aux = reinterpret_cast<void*>(ptr);
	rtrn = reinterpret_cast<uintptr_t>(aux);
	return (rtrn);
}

Data*		deserialize(uintptr_t raw)
{
	void*		aux;
	Data*		d;

	aux = reinterpret_cast<void*>(raw);
	d = reinterpret_cast<Data*>(aux);
	return (d);
}