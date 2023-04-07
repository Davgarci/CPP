/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:39:24 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 23:46:23 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

//====--- Canonical ---===//
Dog(){
	std::cout << "Calling Dog default constructor" << std::endl;
}
~Dog(){
	std::cout << "Calling Dog default destructor" << std::endl;
}
Dog(Dog &dog){
	std::cout << "Calling Dog copy constructor" << std::endl;
}
Dog& operator=(Dog &dog){
	std::cout << "Calling Dog operator assignator" << std::endl;
}