/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:43:36 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/05 00:08:15 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
}

HumanB::~HumanB() {}

void	HumanB::attack(){
	std::cout << this->_name << " attacks with their " << WeB->getType();
	//Weapon
}

void		HumanB::setWeapon(Weapon &wep){
	WeB = &wep;
}