/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:47:39 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/04 21:25:57 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon gun = Weapon("gun");
		HumanA bob("Bob", gun);
		bob.attack();
		gun.setType("some other type of club");
		std::cout << std::endl;
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		std::cout << std::endl;
		jim.attack();

		club.setType("some other type of club");
		std::cout << std::endl;
		jim.attack();
	}
	return 0;
}