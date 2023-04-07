/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:29:08 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 16:27:49 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//====--- Constructors ---===//

FragTrap::FragTrap(){
		_name = "no name";
		_hit = 100;
		_energy = 100;
		_attack_damage = 30;
}
FragTrap::FragTrap(std::string name){
		_name = name;
		_hit = 100;
		_energy = 100;
		_attack_damage = 30;
}
FragTrap::~FragTrap(){}
FragTrap::FragTrap(FragTrap const &a){
	_name = a._name;
	_hit = a._hit;
	_energy = a._energy;
	_attack_damage = a._attack_damage;
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap is hiFive mode." << std::endl;
}

void	FragTrap::attack(const std::string& target){
	std::cout << "FragTrap " << this->_name << " attacks " <<  target;
	std::cout << ", causing " << this->_attack_damage;
	std::cout << " points of damage" << std::endl;
}

void			FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->_name << " takes " <<  amount;
	std::cout << " points of damage" << std::endl;

	this->_energy = this->_energy - amount;

	std::cout << "FragTrap " << this->_name << " now has " <<  this->_energy;
	std::cout << " points of energy" << std::endl;
}

void			FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "The Gods are generous. FragTrap " << this->_name << " gains " <<  amount;
	std::cout << " points of energy" << std::endl;

	this->_energy = this->_energy + amount;

	std::cout << "FragTrap " << this->_name << " now has " <<  this->_energy;
	std::cout << " points of energy" << std::endl;
}