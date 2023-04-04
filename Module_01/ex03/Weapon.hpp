/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:07:05 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/03 18:28:24 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon();
	~Weapon();
	/*setters*/
	void		setType(std::string str);
	/*getters*/
	const std::string &getType() const;
};




#endif