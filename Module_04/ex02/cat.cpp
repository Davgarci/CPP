/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:37:06 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/09 05:39:17 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

//====--- Canonical ---===//
Cat::Cat(){
	this->type = "Cat";
	std::cout << "Calling Cat default constructor" << std::endl;
	this->_brain = new Brain(); //sin parentesis??
}
Cat::~Cat(){
	std::cout << "Calling Cat default destructor" << std::endl;
	delete _brain;
}
Cat::Cat(Cat &instance){
	this->type = instance.type;
	std::cout << "Calling Cat copy constructor" << std::endl;
	_brain = new Brain (*instance._brain);
	
}
Cat& Cat::operator=(Cat &instance){
	this->type = instance.type;
	std::cout << "Calling Cat operator assignator" << std::endl;
	//como igualar el brain?
	return(*this);
}
//el virtual no se pone en el cpp solo en el hpp
void	Cat::makeSound() const{
	std::cout << "Meow!" << std::endl;
}