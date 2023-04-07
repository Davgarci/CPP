/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:35:35 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 12:13:41 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    std::string name;
    std::string target;

    name.assign("Peter");
    target.assign("Other trap");

    ClapTrap instance(name);

    instance.attack(target);
    instance.takeDamage(8);
    instance.beRepaired(20);
    
    ClapTrap instance2(instance);

    instance2.takeDamage(50);
    instance.takeDamage(2);

    ScavTrap hola;
    hola.attack("jjj");
    hola.takeDamage(5);
}