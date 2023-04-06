/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:25:06 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/06 20:19:22 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <iostream>

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
		Fixed& operator=(Fixed const &hello);

		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
};

		std::ostream& operator<< (std::ostream& os, const Fixed& str);