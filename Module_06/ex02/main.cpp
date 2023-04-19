/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:08:42 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/19 23:00:40 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

int main()
{
	srand((unsigned)time(0));
	int i;
	i = rand();
	std::cout << i << std::endl;
	i = time(0);
	std::cout << i << std::endl;
	Base	*base = generate();
	identify(base);
	identify(*base);
	return(0);
}

