/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:27:59 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/02 21:44:22 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
8 contactos
a instancia de la clase PhoneBook
instancia de la clase Contact
ADD, SEARCH y EXIT
ADD:
first name, last name, nickname, phone number, y darkestsecret
SEARCH:
4 columnas, 10 caracteres: index | first name | last name | nickname
ask for index
*/

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() { this->_i = 0; }

PhoneBook::~PhoneBook() {}

// Getters
Contact		PhoneBook::getContact(int i)	const
{ 
	std::cout << "hola " << this->_persons[i].getName() << std::endl;
	return (this->_persons[i]); 
}

// Functions
void		PhoneBook::init(void) const {
	std::cout << std::endl;
	std::cout << "How to use?" << std::endl;
	std::cout << std::endl;
	std::cout << "Type: ADD" << std::endl;
	std::cout << "Type: SEARCH" << std::endl;
	std::cout << "Type: EXIT" << std::endl;
	std::cout << std::endl;
}

 void		PhoneBook::addContact() {
	std::string aux;
	Contact prueba;
	
	std::cout << std::endl << "Name: " ;
	std::cin >> aux;
	this->_persons[this->_i].setName(aux);
	
	std::cout << "Last name: " ;
	std::cin >> aux;
	this->_persons[this->_i].setLast(aux);

	std::cout << "Nick: " ;
	std::cin >> aux;
	this->_persons[this->_i].setNick(aux);

	std::cout << "Phone: " ;
	std::cin >> aux;
	this->_persons[this->_i].setPhone(aux);

	std::cout << "Dark secret: " ;
	std::cin >> aux;
	this->_persons[this->_i].setDark(aux);

	std::cout << "Contact " << this->_i + 1 << " saved" << std::endl << std::endl;
	
	this->_i++;
	if (this->_i == 8)
		this->_i = 0;
 }

 void		PhoneBook::search(void){
	int i = 0;
	int aux;
	std::string dash = "-";
	std::cout << "|----IN----|----FN----|----LN----|----NK----|" << std::endl;
	while (this->_persons[i].getName().length() != 0 && i < 8){
		
		std::cout << "|---------";
		std::cout << i + 1;
		std::cout << "|";
		if (this->_persons[i].getName().length() == 10)
			std::cout << this->_persons[i].getName();
		else if (this->_persons[i].getName().length() > 10)
		{
			std::cout << this->_persons[i].getName().substr(0,9);
			std::cout << ".";
		}
		else
		{
			aux = 10  - this->_persons[i].getName().length();
			std::cout << std::string(aux, '-');
			std::cout << this->_persons[i].getName();
		}
		std::cout << "|";
		
		if (this->_persons[i].getLast().length() == 10)
			std::cout << this->_persons[i].getLast();
		else if (this->_persons[i].getLast().length() > 10)
		{
			std::cout << this->_persons[i].getLast().substr(0,9);
			std::cout << ".";
		}
		else
		{
			aux = 10  - this->_persons[i].getLast().length();
			std::cout << std::string(aux, '-');
			std::cout << this->_persons[i].getLast();
		}
		std::cout << "|";
		
		if (this->_persons[i].getNick().length() == 10)
			std::cout << this->_persons[i].getNick();
		else if (this->_persons[i].getNick().length() > 10)
		{
			std::cout << this->_persons[i].getNick().substr(0,9);
			std::cout << ".";
		}
		else
		{
			aux = 10  - this->_persons[i].getNick().length();
			std::cout << std::string(aux, '-');
			std::cout << this->_persons[i].getNick();
		}
		std::cout << "|" << std::endl;
		
		i++;
	}
	
	std::cout << "What contact do you want to see?" << std::endl << "Input index: " ;
	std::cin >> aux;
	aux = aux - 1;
	if (aux < 0 || aux > i - 1)
		std::cout << "Invalid index" << std::endl;
	else
	{
		std::cout << std::endl << "Name: " ;
		std::cout << this->_persons[aux].getName() << std::endl;
		std::cout << "Last Name: " ;
		std::cout << this->_persons[aux].getLast() << std::endl;
		std::cout << "Nick Name: " ;
		std::cout << this->_persons[aux].getNick() << std::endl;
		std::cout << "Phone: " ;
		std::cout << this->_persons[aux].getPhone() << std::endl;
		std::cout << "Dark secret: " ;
		std::cout << this->_persons[aux].getDark() << std::endl << std::endl;
	}
 }
