/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:11:08 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/08 20:40:37 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
# include <iomanip>
# include <string>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal(); //xq destructor en virtual
		WrongAnimal(std::string totype);
		WrongAnimal(WrongAnimal &WrongAnimal);
		WrongAnimal& operator=(WrongAnimal &WrongAnimal);
		
		void 	makeSound() const;
		const std::string	getType() const;
};

#endif