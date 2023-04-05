/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:25:06 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/05 21:17:35 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	private:
		int _full;
		const static int _fractional_bit = 8;
	public:
		Fixed(void);
		~Fixed();
		Fixed(Fixed &hello);
		Fixed& operator=(Fixed &hello);

		int getRawBits( void ) const;
		void setRawBits ( int const raw );
};

# endif