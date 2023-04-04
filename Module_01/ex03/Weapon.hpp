/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:07:05 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/04 19:33:11 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string weapon);
	~Weapon();
	/*setters*/
	void		setType(std::string str);
	void		setWeapon(Weapon wep);
	/*getters*/
	const std::string &getType() const;
};

#endif