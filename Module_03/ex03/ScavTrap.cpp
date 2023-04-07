/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 05:28:46 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 16:27:45 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//====--- Constructors ---===//

ScavTrap::ScavTrap(){
		_name = "no name";
		_hit = 100;
		_energy = 50;
		_attack_damage = 20;
}
ScavTrap::ScavTrap(std::string name){
		_name = name;
		_hit = 100;
		_energy = 50;
		_attack_damage = 20;
}
ScavTrap::~ScavTrap(){}
ScavTrap::ScavTrap(ScavTrap const &a){
	_name = a._name;
	_hit = a._hit;
	_energy = a._energy;
	_attack_damage = a._attack_damage;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target){
	std::cout << "ScavTrap " << this->_name << " attacks " <<  target;
	std::cout << ", causing " << this->_attack_damage;
	std::cout << " points of damage" << std::endl;
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->_name << " takes " <<  amount;
	std::cout << " points of damage" << std::endl;

	this->_energy = this->_energy - amount;

	std::cout << "ScavTrap " << this->_name << " now has " <<  this->_energy;
	std::cout << " points of energy" << std::endl;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "The Gods are generous. ScavTrap " << this->_name << " gains " <<  amount;
	std::cout << " points of energy" << std::endl;

	this->_energy = this->_energy + amount;

	std::cout << "ScavTrap " << this->_name << " now has " <<  this->_energy;
	std::cout << " points of energy" << std::endl;
}