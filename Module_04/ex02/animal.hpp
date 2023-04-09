/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:52:21 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/09 06:44:00 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
# include <iomanip>
# include <string>

class AAnimal {
	protected:
		std::string type;
	public:
		AAnimal();
		virtual ~AAnimal(); //xq destructor en virtual
		AAnimal(std::string totype);
		AAnimal(AAnimal &animal);
		AAnimal& operator=(AAnimal &animal);
		
		virtual void 	makeSound() const = 0; // igualar esto a cero la hace abstracta
		const std::string	getType() const;
};

#endif