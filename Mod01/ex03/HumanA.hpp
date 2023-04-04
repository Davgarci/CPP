/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:42:10 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/03 20:06:53 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP

# include "HumanB.hpp"
# include "Weapon.hpp"

class HumanA{
	private:
		Weapon		WeA;
		std::string name;
	public:
		HumanA();
		~HumanA();
		
		void		attack();
};

#endif