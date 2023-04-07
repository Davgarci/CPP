/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:52:03 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 23:36:05 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

//====--- Canonical ---===//
Animal(){
	std::cout << "Calling Animal default constructor" << std::endl;
}
~Animal(){
	std::cout << "Calling Animal default destructor" << std::endl;
}
Animal(Animal &animal){
	std::cout << "Calling Animal copy constructor" << std::endl;
}
Animal& operator=(Animal &animal){
	std::cout << "Calling Animal operator assignator" << std::endl;
}

//====--- Functions ---===//
void Animal::makeSound() const {
	std::cout << "Non-raze non-gender non-especific animal sound" << std::endl;
}
//====--- Getter ---===//

std::string Animal::getType() const
{
	return(type);
}