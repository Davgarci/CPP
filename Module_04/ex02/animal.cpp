/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:52:03 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/09 07:23:13 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

//====--- Canonical ---===//
AAnimal::AAnimal(){
	std::cout << "Calling AAnimal default constructor" << std::endl;
}
AAnimal::AAnimal(std::string totype){
	this->type = totype;
	std::cout << "Calling AAnimal string constructor" << std::endl;
}
AAnimal::~AAnimal(){
	std::cout << "Calling AAnimal default destructor" << std::endl;
}
AAnimal::AAnimal(AAnimal &animal){
	std::cout << "Calling AAnimal copy constructor" << std::endl;
	this->type = animal.type;
}
AAnimal& AAnimal::operator=(AAnimal &animal){
	std::cout << "Calling AAnimal operator assignator" << std::endl;
	type = animal.type;
	return(*this);
}

//====--- Functions ---===//                            Para hacerla abstracta borro la implementacion de make sound en animal
//void AAnimal::AAnimal::makeSound() const {
//	std::cout << "Non-race non-gender non-especific animal sound" << std::endl;
//}
//====--- Getter ---===//

const std::string AAnimal::getType() const
{
	return(type);
}