/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:23:07 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/08 20:40:46 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat &instance);
		WrongCat& operator=(WrongCat &instance);

		void	makeSound() const;
		//std::string 	getType() const; //no necesitamos getter??
};

#endif