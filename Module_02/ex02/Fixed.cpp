/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:25:03 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 02:22:28 by davgarci         ###   ########.fr       */
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
	std::cout << "Float constructor called" << _full << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &hello){
	std::cout << "Copy constructor called" << std::endl;
	 *this = hello;
}

//====--- Operators ---===//

Fixed& Fixed::operator=(Fixed const &hello){
	std::cout << "Assignation operator called" << std::endl;
	this->_full = hello.getRawBits();
	return(*this);
}

//====--- Operators ---===//

bool Fixed::operator>(Fixed const &hello) {
	return(this->getRawBits() > hello.getRawBits());
}
bool Fixed::operator<(Fixed const &hello) {
	return(this->getRawBits() < hello.getRawBits());
}
bool Fixed::operator>=(Fixed const &hello) {
	return(this->getRawBits() >= hello.getRawBits());
}
bool Fixed::operator<=(Fixed const &hello) {
	return(this->getRawBits() <= hello.getRawBits());
}
bool Fixed::operator==(Fixed const &hello) {
	return(this->getRawBits() == hello.getRawBits());
}
bool Fixed::operator!=(Fixed const &hello) {
	return(this->getRawBits() != hello.getRawBits());
}

//====--- Operators ---===//

Fixed	Fixed::operator+(Fixed const &hello){
	Fixed result;
	result.setRawBits((this->getRawBits() + hello.getRawBits()));
	return(result);
}
Fixed	Fixed::operator-(Fixed const &hello){
	Fixed result;
	result.setRawBits((this->getRawBits() - hello.getRawBits()));
	return(result);
}
Fixed	Fixed::operator*(Fixed const &hello){
	Fixed result;
	result.setRawBits((this->getRawBits() * hello.getRawBits()) / 256);
	return(result);
}
Fixed	Fixed::operator/(Fixed const &hello){
	Fixed result;
	result.setRawBits((this->getRawBits() / hello.getRawBits()) * 256);
	return(result);
}

//====--- Operators ---===//

Fixed&			Fixed::operator++(void){
	this->setRawBits(this->getRawBits() + 256);
	std::cout << "op++(void) == ++a";
	return(*this);
}
Fixed&			Fixed::operator--(void){
	this->setRawBits(this->getRawBits() - 256);
	return(*this);
}
Fixed			Fixed::operator++(int i){
	Fixed a;
	a.Fixed::setRawBits(this->getRawBits() + 256);
	std::cout << "op++(int i) == a++";
	return(a);
}
Fixed			Fixed::operator--(int i){
	Fixed a;
	a.Fixed::setRawBits(this->getRawBits() - 256);
	return(a);
}

//====--- Operators MIN MAX ---===//

Fixed&			Fixed::min(Fixed & a, Fixed & b){
	if (a > b)
		return(b);
	else
		return(a);
}
const Fixed&	Fixed::min(Fixed const & a, Fixed const & b){
	if (a > b)
		return(b);
	else
		return(a);
}
Fixed&			Fixed::max(Fixed & a, Fixed & b){
	if (a > b)
		return(a);
	else
		return(b);
}
const Fixed&	Fixed::max(Fixed const & a, Fixed const & b){
	if (a > b)
		return(a);
	else
		return(b);
}

//====--- Operators ---===//

std::ostream& operator<< (std::ostream& os, const Fixed& str){
	os << str.toFloat();
	return(os);
}

//====--- Functions ---===//

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