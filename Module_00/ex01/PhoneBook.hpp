/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:07:10 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/02 19:43:13 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
	private:
		Contact	_persons[8];
		int		_i;
	public:
		PhoneBook();
		~PhoneBook();

		// Getters
		Contact	getContact(int i)	const;

		// Setter
		//void	setCounter()

		// Functions
		void	init(void) const;
		void	addContact(void);
		void	search(void);
		//
		
		

};

#endif