/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:37:06 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 23:45:21 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

//====--- Canonical ---===//
Cat(){
	std::cout << "Calling Cat default constructor" << std::endl;
}
~Cat(){
	std::cout << "Calling Cat default destructor" << std::endl;
}
Cat(Cat &cat){
	std::cout << "Calling Cat copy constructor" << std::endl;
}
Cat& operator=(Cat &cat){
	std::cout << "Calling Cat operator assignator" << std::endl;
}