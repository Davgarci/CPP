/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:35:02 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/03 17:46:04 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void){
	std::string hey = "HI THIS IS BRAIN";
	std::string *stringPTR = &hey;
	std::string &stringREF = hey;

	std::cout << &hey << " : La dirección de memoria de la variable de tipo string." << std::endl;
	std::cout << stringPTR << " : La dirección de memoria contenida en stringPTR." << std::endl;
	std::cout << &stringPTR << " : La dirección de memoria contenida en stringREF." << std::endl;

	std::cout << hey << " : El valor de la variable string." << std::endl;
	std::cout << *stringPTR << " : El valor apuntado por stringPTR." << std::endl;
	std::cout << stringREF << " : El valor apuntado por stringREF." << std::endl;
	return(0);
}