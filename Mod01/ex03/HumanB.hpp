/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:42:17 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/03 20:06:43 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

# include "HumanA.hpp"
# include "Weapon.hpp"

class HumanB{
	private:
		Weapon		WeB;
		std::string name;
	public:
		HumanB();
		~HumanB();
		
		void		attack();
};

#endif

#endif