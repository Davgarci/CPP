/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:22:58 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/08 20:29:20 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//====--- Canonical ---===//
WrongCat::WrongCat(){
	this->type = "WrongCat";
	std::cout << "Calling WrongCat default constructor" << std::endl;
}
WrongCat::~WrongCat(){
	std::cout << "Calling WrongCat default destructor" << std::endl;
}
WrongCat::WrongCat(WrongCat &instance){
	this->type = instance.type;
	std::cout << "Calling WrongCat copy constructor" << std::endl;
}
WrongCat& WrongCat::operator=(WrongCat &instance){
	this->type = instance.type;
	std::cout << "Calling WrongCat operator assignator" << std::endl;
	return(*this);
}
//el virtual no se pone en el cpp solo en el hpp
void	WrongCat::makeSound() const{
	std::cout << "Meow!" << std::endl;
}