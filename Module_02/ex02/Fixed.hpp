/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:14:09 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 02:01:32 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <iostream>
# include <iomanip>
# include <string>
# include <cmath>

class Fixed {
	private:
		int _full;
		const static int _fractional_bit = 8;
	public:
		Fixed(void);
		~Fixed();
		Fixed(Fixed const &hello);
		Fixed(const int i);
		Fixed(const float i);
		
		Fixed&			operator=(Fixed const &hello);

		bool 			operator>(Fixed const &hello);
		bool 			operator<(Fixed const &hello);
		bool 			operator>=(Fixed const &hello);
		bool 			operator<=(Fixed const &hello);
		bool 			operator==(Fixed const &hello);
		bool 			operator!=(Fixed const &hello);
		
		Fixed			operator+(Fixed const &hello);
		Fixed			operator-(Fixed const &hello);
		Fixed			operator*(Fixed const &hello);
		Fixed			operator/(Fixed const &hello);

		Fixed&			operator++(void);
		Fixed&			operator--(void);
		Fixed			operator++(int i);
		Fixed			operator--(int i);

		static Fixed&			min(Fixed & a, Fixed & b);
		static Fixed&			max(Fixed & a, Fixed & b);
		static const Fixed&		min(Fixed  const & a, Fixed const & b);
		static const Fixed&		max(Fixed  const & a, Fixed const & b);

		// functions
		float 			toFloat( void ) const;
		int 			toInt( void ) const;
		int 			getRawBits( void ) const;
		void 			setRawBits ( int const raw );
};

		std::ostream& operator<< (std::ostream& os, const Fixed& str);