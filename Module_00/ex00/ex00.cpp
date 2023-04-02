/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:58:38 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/02 21:47:40 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int argc, char** argv)
{
	int i = 1;
	std::string s1;
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		while(i < argc)
		{
			s1 = argv[i];
			transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
			std::cout <<s1 << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return(0);
}