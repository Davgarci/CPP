/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:09:03 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/19 23:00:48 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include <cstdlib> 
# include <ctime>

class Base {
	public:
		virtual ~Base() { };
};

class A : public Base { };
class B : public Base { };
class C : public Base { };

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
