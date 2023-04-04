/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:42:10 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/05 00:06:49 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP

# include "HumanB.hpp"
# include "Weapon.hpp"

class HumanA{
	private:
		Weapon		&WeA;
		std::string _name;
	public:
		HumanA(std::string name, Weapon &wep);
		~HumanA();
		
		void		attack();
};

#endif