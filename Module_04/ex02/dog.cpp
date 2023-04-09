/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:39:24 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/09 05:43:53 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

//====--- Canonical ---===//
Dog::Dog(){
	this->type = "Dog";
	std::cout << "Calling Dog default constructor" << std::endl;
	this->_brain = new Brain();
}
Dog::~Dog(){
	std::cout << "Calling Dog default destructor" << std::endl;
	delete _brain;
}
Dog::Dog(Dog &instance){
	this->type = instance.type;
	std::cout << "Calling Dog copy constructor" << std::endl;
	_brain = new Brain (*instance._brain);
}
Dog& Dog::operator=(Dog &instance){
	this->type = instance.type;
	std::cout << "Calling Dog operator assignator" << std::endl;
	//how to equal brain
	return(*this);
}
void	Dog::makeSound() const{
	std::cout << "Woof!" << std::endl;
}