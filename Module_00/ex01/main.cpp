/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 22:45:58 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 20:39:16 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"



int main()
{
	PhoneBook A;
	std::string input;
	A.init();
	
	while (true)
	{
		std::cout << "Your option: " ;
		std::getline(std::cin, input);
		if (input == "ADD")
			A.addContact();
		else if (input == "SEARCH")
			A.search();
		else if (input == "EXIT")
			exit(1);
		else
			std::cout << "invalid input" << std::endl;
		
	}

}
