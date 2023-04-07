/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:40:37 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 13:19:19 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
# include <iomanip>
# include <string>

class ClapTrap {
	protected:
		std::string		_name;
		int				_hit;
		int				_energy;
		int				_attack_damage;
	public:
		//constructor
		ClapTrap();
		//constructor string
		ClapTrap(std::string name);
		//destructor
		~ClapTrap();
		//constructor de copia
		ClapTrap(ClapTrap const &a);
		//sobrecarga operador asignacion
		ClapTrap& 	operator=(ClapTrap &a);
		
		//getters
		std::string	getName();
		int			getHit();
		int			getEnergy();
		int			getAttackdamage();
		
		//functions
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif