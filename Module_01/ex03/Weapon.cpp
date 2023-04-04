/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:06:58 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/04 19:43:27 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string weapon){
	_type = weapon;
}
Weapon::~Weapon(){}

void		Weapon::setType(std::string str){
	this->_type = str;
}

const std::string &Weapon::getType() const{
	return ( _type );
}
