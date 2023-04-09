/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:39:07 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/08 19:16:58 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
class Dog : public Animal{
	public:
		Dog();
		~Dog();
		Dog(Dog &Dog);
		Dog& operator=(Dog &Dog);
		
		virtual void 	makeSound() const;
		//std::string 	getType() const;
};
#endif