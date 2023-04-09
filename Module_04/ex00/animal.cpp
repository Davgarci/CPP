/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:52:03 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/08 20:34:06 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

//====--- Canonical ---===//
Animal::Animal(){
	std::cout << "Calling Animal default constructor" << std::endl;
}
Animal::Animal(std::string totype){
	this->type = totype;
	std::cout << "Calling Animal string constructor" << std::endl;
}
Animal::~Animal(){
	std::cout << "Calling Animal default destructor" << std::endl;
}
Animal::Animal(Animal &animal){
	std::cout << "Calling Animal copy constructor" << std::endl;
	this->type = animal.type;
}
Animal& Animal::operator=(Animal &animal){
	std::cout << "Calling Animal operator assignator" << std::endl;
	return(*this);
}

//====--- Functions ---===//
void Animal::Animal::makeSound() const {
	std::cout << "Non-race non-gender non-especific animal sound" << std::endl;
}
//====--- Getter ---===//

const std::string Animal::getType() const
{
	return(type);
}