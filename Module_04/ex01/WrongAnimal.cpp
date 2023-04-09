/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:10:59 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/08 20:27:47 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//====--- Canonical ---===//
WrongAnimal::WrongAnimal(){
	std::cout << "Calling WrongAnimal default constructor" << std::endl;
}
WrongAnimal::WrongAnimal(std::string totype){
	this->type = totype;
	std::cout << "Calling WrongAnimal string constructor" << std::endl;
}
WrongAnimal::~WrongAnimal(){
	std::cout << "Calling WrongAnimal default destructor" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal &WrongAnimal){
	std::cout << "Calling WrongAnimal copy constructor" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal &WrongAnimal){
	std::cout << "Calling WrongAnimal operator assignator" << std::endl;
	return(*this);
}

//====--- Functions ---===//
void WrongAnimal::WrongAnimal::makeSound() const {
	std::cout << "Non-race non-gender non-especific WrongAnimal sound" << std::endl;
}
//====--- Getter ---===//

const std::string WrongAnimal::getType() const
{
	return(type);
}