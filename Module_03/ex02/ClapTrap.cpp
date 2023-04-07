/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:41:18 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 12:30:47 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//====--- Constructors ---===//

ClapTrap::ClapTrap(){
		_name = "no name";
		_hit = 10;
		_energy = 10;
		_attack_damage = 0;
}
ClapTrap::ClapTrap(std::string name){
		_name = name;
		_hit = 10;
		_energy = 10;
		_attack_damage = 0;
}
ClapTrap::~ClapTrap(){}
ClapTrap::ClapTrap(ClapTrap const &a){
	_name = a._name;
	_hit = a._hit;
	_energy = a._energy;
	_attack_damage = a._attack_damage;
}

//====--- Operators ---===//

ClapTrap& ClapTrap::operator=(ClapTrap &a){
	_name = a._name;
	_hit = a._hit;
	_energy = a._energy;
	_attack_damage = a._attack_damage;
	return(a);
}

//====--- Getters ---===//

std::string	ClapTrap::getName(){
	return(this->_name);
}
int			ClapTrap::getHit(){
	return(this->_hit);
}
int			ClapTrap::getEnergy(){
	return(this->_energy);
}
int			ClapTrap::getAttackdamage(){
	return(this->_attack_damage);
}

//====--- Functions ---===//

void	ClapTrap::attack(const std::string& target){
	std::cout << "ClapTrap " << this->_name << " attacks " <<  target;
	std::cout << ", causing " << this->_attack_damage;
	std::cout << " points of damage" << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " <<  amount;
	std::cout << " points of damage" << std::endl;

	this->_energy = this->_energy - amount;

	std::cout << "ClapTrap " << this->_name << " now has " <<  this->_energy;
	std::cout << " points of energy" << std::endl;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "The Gods are generous. ClapTrap " << this->_name << " gains " <<  amount;
	std::cout << " points of energy" << std::endl;

	this->_energy = this->_energy + amount;

	std::cout << "ClapTrap " << this->_name << " now has " <<  this->_energy;
	std::cout << " points of energy" << std::endl;
}

