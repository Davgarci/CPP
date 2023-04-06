/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:25:03 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/06 22:54:57 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	_full = 0;
}

Fixed::Fixed(const int i){
	_full = (i << _fractional_bit);
	std::cout << "Int constructor called" << std::endl;
}

// 1 << _fractional_bit es 256 que es como mover 8 bits a la izq
Fixed::Fixed(const float i){
	_full = (i * (1 << _fractional_bit));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &hello){
	std::cout << "Copy constructor called" << std::endl;
	 *this = hello;
}

Fixed& Fixed::operator=(Fixed const &hello){
	std::cout << "Assignation operator called" << std::endl;
	this->_full = hello.getRawBits();
	return(*this);
}

std::ostream& operator<< (std::ostream& os, const Fixed& str){
	os << str.toFloat();
	return(os);
}

float Fixed::toFloat( void ) const{
	float a = (float)_full / 256;
	return(a);
}

int Fixed::toInt( void ) const{
	int a = _full / 256;
	return(a);
}

int Fixed::getRawBits( void ) const{
	return(this->_full);
}

void Fixed::setRawBits ( int const raw ){
	_full = raw;
}