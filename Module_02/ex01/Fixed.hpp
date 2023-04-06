/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:25:06 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/05 21:32:44 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

class Fixed {
	private:
		int _full;
		const static int _fractional_bit = 8;
	public:
		Fixed(void);
		~Fixed();
		Fixed(Fixed &hello);
		Fixed(int i);
		Fixed& operator=(Fixed &hello);

		int getRawBits( void ) const;
		void setRawBits ( int const raw );
};
