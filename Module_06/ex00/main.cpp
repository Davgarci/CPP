/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:59:49 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/16 21:02:04 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return (1);
	}
	detect_type(argv[1]);
}