/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:16:41 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/09 03:04:04 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "animal.hpp"

class Brain {
	private:
		std::string ideas[100];
	public:
	Brain();
	~Brain();
	Brain(Brain &instance);
	Brain& operator=(Brain &instance);
};

#endif