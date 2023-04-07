/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 05:28:49 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 16:26:10 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
		//constructor
		ScavTrap();
		//constructor string
		ScavTrap(std::string name);
		//destructor
		~ScavTrap();
		//constructor de copia
		ScavTrap(ScavTrap const &a);
		//sobrecarga operador asignacion
		ScavTrap& 	operator=(ScavTrap &a);
		
		//Functions
		void guardGate();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif