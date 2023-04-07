/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:37:24 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/07 23:43:44 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		~Cat();
		Cat(Cat &Cat);
		Cat& operator=(Cat &Cat);
		
		virtual void 	makeSound() const;
		std::string 	getType() const;
};

#endif