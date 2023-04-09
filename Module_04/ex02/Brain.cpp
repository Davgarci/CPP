/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:20:03 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/09 05:47:03 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//====--- Canonical ---===//
Brain::Brain(){
	std::cout << "Calling Brain default constructor" << std::endl;
	int i = 0;
	while (i <=99){
		this->ideas[i] = "";
		i++;
	}
}
Brain::~Brain(){
	std::cout << "Calling Brain default destructor" << std::endl;
}
Brain::Brain(Brain &instance){
	int i = 0;
	std::cout << "Calling Brain copy constructor" << std::endl;
	while (i <=99){
		this->ideas[i] = instance.ideas[i];
		i++;
	}
}
Brain& Brain::operator=(Brain &instance){
	std::cout << "Calling Animal operator assignator" << std::endl;
	int i = 0;
	while (i <=99){
		this->ideas[i] = instance.ideas[i];
		i++;
	}
	return(*this);
}