/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:10:21 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/19 23:03:42 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base * generate(void){
	
	int i = rand();
	if (i % 2 == 0)
		return (new A);
	else if (i % 3 == 0)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A\n";
	if (dynamic_cast<B *>(p))
		std::cout << "B\n";
	if (dynamic_cast<C *>(p))
		std::cout << "C\n";
}

void identify(Base& p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A\n";
	if (dynamic_cast<B *>(&p))
		std::cout << "B\n";
	if (dynamic_cast<C *>(&p))
		std::cout << "C\n";
}