/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:37:06 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/08 19:36:46 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

//====--- Canonical ---===//
Cat::Cat(){
	this->type = "Cat";
	std::cout << "Calling Cat default constructor" << std::endl;
}
Cat::~Cat(){
	std::cout << "Calling Cat default destructor" << std::endl;
}
Cat::Cat(Cat &instance){
	this->type = instance.type;
	std::cout << "Calling Cat copy constructor" << std::endl;
}
Cat& Cat::operator=(Cat &instance){
	this->type = instance.type;
	std::cout << "Calling Cat operator assignator" << std::endl;
	return(*this);
}
//el virtual no se pone en el cpp solo en el hpp
void	Cat::makeSound() const{
	std::cout << "Meow!" << std::endl;
}