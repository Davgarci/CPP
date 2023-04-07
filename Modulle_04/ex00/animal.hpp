/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:52:21 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 23:35:46 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
# include <iomanip>
# include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		Animal(Animal &animal);
		Animal& operator=(Animal &animal);
		
		virtual void 	makeSound() const;
		std::string 	getType() const;
};

#endif