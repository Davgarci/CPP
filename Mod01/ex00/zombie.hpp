/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:15:39 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/03 16:07:12 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie{
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		void		setName(std::string str);
		void		anounce(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif
