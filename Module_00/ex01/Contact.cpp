/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:26:07 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/01 18:56:03 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Se ejecuta cuando instanciamos la clase
Contact::Contact() { }

Contact::~Contact() { }

std::string		Contact::getName()	const { return (this->_name); }
std::string		Contact::getLast()	const { return (this->_last); }
std::string		Contact::getNick()	const { return (this->_nick); }
std::string		Contact::getPhone()	const { return (this->_phone); }
std::string		Contact::getDark()	const { return (this->_dark); }
int				Contact::getIndex()	const { return (this->_index); }

void			Contact::setName(std::string name) { this->_name = name; }
void			Contact::setLast(std::string last) { this->_last = last; }
void			Contact::setNick(std::string nick) { this->_nick = nick; }
void			Contact::setPhone(std::string phone) { this->_phone = phone; }
void			Contact::setDark(std::string dark) { this->_dark = dark; }
void			Contact::setIndex(int index) { this->_index = index; }

