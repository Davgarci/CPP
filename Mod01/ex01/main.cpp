/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:19:10 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/03 17:32:03 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(){
	Zombie *A;
	A = zombieHorde(5, "ZZZZ");

	A[0].anounce();
	A[1].anounce();
	A[2].anounce();
	A[3].anounce();
	A[4].anounce();
	return(0);
}