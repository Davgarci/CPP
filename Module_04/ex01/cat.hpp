/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:37:24 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/08 23:42:28 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain* _brain;
	public:
		Cat();
		~Cat();
		Cat(Cat &instance);
		Cat& operator=(Cat &instance);

		virtual void	makeSound() const;
		//std::string 	getType() const; //no necesitamos getter??
};

#endif