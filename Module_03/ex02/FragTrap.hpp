/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:29:04 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 16:26:06 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
	public:
		//constructor
		FragTrap();
		//constructor string
		FragTrap(std::string name);
		//destructor
		~FragTrap();
		//constructor de copia
		FragTrap(FragTrap const &a);
		//sobrecarga operador asignacion
		FragTrap& 	operator=(FragTrap &a);
		
		//Functions
		void highFivesGuys();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif