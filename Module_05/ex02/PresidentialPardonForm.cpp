/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:56:53 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/16 19:28:45 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form(25, 5, "Robotomy"), _target("Blank") { }

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(25, 5, "Robotomy"), _target(target) { }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& obj) { *this = obj; }

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &obj)
{
	if (this == &obj)
		return (*this);
	
	PresidentialPardonForm* aux = new PresidentialPardonForm(obj._target);
	return (*aux);	
}

PresidentialPardonForm::~PresidentialPardonForm() { }

void        PresidentialPardonForm::execute()  const
{
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}