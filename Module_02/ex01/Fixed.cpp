/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:25:03 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/05 21:10:42 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	_full = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &hello){
	std::cout << "Copy constructor called" << std::endl;
	 this->_full = hello._full;
}

Fixed& Fixed::operator=(Fixed &hello){
	std::cout << "Assignation operator called" << std::endl;
	this->_full = hello.getRawBits();
	return(*this);
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_full);
}

void Fixed::setRawBits ( int const raw ){
	_full = raw;
}