/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:42:17 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/05 00:08:41 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

# include "HumanA.hpp"
# include "Weapon.hpp"

class HumanB{
	private:
		Weapon		*WeB;
		std::string _name;
	public:
		HumanB(std::string name);
		~HumanB();
		
		void		setWeapon(Weapon &wep);
		void		attack();
};

#endif
