/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:49:23 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 19:33:33 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//====--- Constructors ---===//

DiamondTrap::DiamondTrap(){
		this->_name.assign("no name" + ClapTrap::_name);
		_hit = FragTrap::_hit;
		_energy = ScavTrap::_energy;
		_attack_damage = FragTrap::_attack_damage;
}
DiamondTrap::DiamondTrap(std::string name){
		FragTrap::_name.assign(name + ClapTrap::_name);
		_hit = FragTrap::_hit;
		_energy = ScavTrap::_energy;
		_attack_damage = FragTrap::_attack_damage;
}
DiamondTrap::~DiamondTrap(){}
DiamondTrap::DiamondTrap(DiamondTrap const &a){
	_name = a._name;
	_hit = a._hit;
	_energy = a._energy;
	_attack_damage = a._attack_damage;
}

void DiamondTrap::whoAmI(){
	std::cout << "My name is " << _name;
	std::cout << " and clapTrap name is " << ClapTrap::_name <<std::endl;
}

//void	FragTrap::attack(const std::string& target){
//		ClapTrap::attack(target);
//}

void			DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap " << this->_name << " takes " <<  amount;
	std::cout << " points of damage" << std::endl;

	this->_energy = this->_energy - amount;

	std::cout << "DiamondTrap " << this->_name << " now has " <<  this->_energy;
	std::cout << " points of energy" << std::endl;
}

void			DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "The Gods are generous. DiamondTrap " << this->_name << " gains " <<  amount;
	std::cout << " points of energy" << std::endl;

	this->_energy = this->_energy + amount;

	std::cout << "DiamondTrap " << this->_name << " now has " <<  this->_energy;
	std::cout << " points of energy" << std::endl;
}