/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:08:16 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/03 17:25:51 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	int i = 0;
	Zombie *Z = new Zombie[N];
	while (i < N)
	{
		Z[i].setName(name);
		i++;
	}
	return(Z);
}