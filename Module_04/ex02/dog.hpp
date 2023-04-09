/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:39:07 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/08 23:43:05 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain* _brain;
	public:
		Dog();
		~Dog();
		Dog(Dog &Dog);
		Dog& operator=(Dog &Dog);
		
		virtual void 	makeSound() const;
		//std::string 	getType() const;
};
#endif