/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:39:24 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/08 19:40:55 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

//====--- Canonical ---===//
Dog::Dog(){
	this->type = "Dog";
	std::cout << "Calling Dog default constructor" << std::endl;
}
Dog::~Dog(){
	std::cout << "Calling Dog default destructor" << std::endl;
}
Dog::Dog(Dog &dog){
	std::cout << "Calling Dog copy constructor" << std::endl;
}
Dog& Dog::operator=(Dog &instance){
	this->type = instance.type;
	std::cout << "Calling Dog operator assignator" << std::endl;
	return(*this);
}
void	Dog::makeSound() const{
	std::cout << "Woof!" << std::endl;
}