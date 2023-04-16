/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:57:00 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/16 19:29:01 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form(72, 45, "Robotomy"), _target("Blank") { }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(72, 45, "Robotomy"), _target(target) { }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& obj) { *this = obj; }

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &obj)
{
	if (this == &obj)
		return (*this);
	
	RobotomyRequestForm* aux = new RobotomyRequestForm(obj._target);
	return (*aux);	
}

RobotomyRequestForm::~RobotomyRequestForm() { }

void        RobotomyRequestForm::execute()  const
{
    std::cout << "< BZZZZZ BZZZZZ >" << std::endl;
    srand((unsigned int)time(NULL));
    
    int     nb = (rand() % 2);
    if (nb == 0)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "The robotomization has been a failure" << std::endl;
        
}