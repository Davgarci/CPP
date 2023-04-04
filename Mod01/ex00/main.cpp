/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:19:10 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/03 17:01:54 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(){
	std::cout << newZombie("hola") << std::endl;
	newZombie("Jhon")->anounce();
	randomChump("Peter");
	return(0);
}