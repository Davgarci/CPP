/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:42:17 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/04 19:41:01 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

# include "HumanA.hpp"
# include "Weapon.hpp"

class HumanB{
	private:
		Weapon		WeB;
		std::string _name;
	public:
		HumanB(std::string name);
		~HumanB();
		
		void		attack();
};

#endif
