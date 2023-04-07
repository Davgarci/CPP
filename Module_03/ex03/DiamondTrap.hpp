/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:47:53 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 19:26:13 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		//constructor
		DiamondTrap();
		//constructor string
		DiamondTrap(std::string name);
		//destructor
		~DiamondTrap();
		//constructor de copia
		DiamondTrap(DiamondTrap const &a);
		//sobrecarga operador asignacion
		DiamondTrap& 	operator=(DiamondTrap &a);
		
		//Functions
		void whoAmI();

		//void		attack(const std::string& target); //usar ScavTrap
		using 		ScavTrap::attack;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif