/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:20:54 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/02 14:01:54 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact{
	private:
		std::string	_name;
		std::string	_last;
		std::string	_nick;
		std::string	_phone;
		std::string	_dark;
		int			_index;
	public:
    	Contact();
    	~Contact();

		// Getters
		std::string		getName()	const;
		std::string		getLast()	const;
		std::string		getNick()	const;
		std::string		getPhone()	const;
		std::string		getDark()	const;
		int				getIndex()	const;

		// Setters
		void			setName(std::string name);
		void			setLast(std::string last);
		void			setNick(std::string nick);
		void			setPhone(std::string phone);
		void			setDark(std::string dark);
		void			setIndex(int index);

};

#endif