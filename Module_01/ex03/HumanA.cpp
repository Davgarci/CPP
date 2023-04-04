/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:41:20 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/05 00:06:52 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wep) : WeA(wep) {
	//WeA = wep;
	_name = name;
}

HumanA::~HumanA() {}

void	HumanA::attack(){
	std::cout << this->_name << " attacks with their " << WeA.getType();
	//Weapon
}

//void		HumanA::setWeapon(Weapon wep){
//	WeA = wep;
//}