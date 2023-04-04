/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:13:25 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/03 16:52:35 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie() {}
Zombie::~Zombie() {}

void		Zombie::setName(std::string str){
	this->_name = str;
}

void		Zombie::anounce(void) {
	std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}