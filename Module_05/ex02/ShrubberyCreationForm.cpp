/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:57:06 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/16 19:29:23 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form(145, 137, "Shrubbery"), _target("Blank") { }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(145, 137, "Shrubbery"), _target(target) { }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& obj) { *this = obj; }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{
	if (this == &obj)
		return (*this);
	
	ShrubberyCreationForm* aux = new ShrubberyCreationForm(obj._target);
	return (*aux);	
}

ShrubberyCreationForm::~ShrubberyCreationForm() { }

void	ShrubberyCreationForm::execute()		const
{
	std::ofstream		ofs;
	
	ofs.open(this->_target + "_schrubbery", std::ofstream::trunc);
	if (ofs.is_open())
	{
		ofs << "                                                         ." << std::endl;
        ofs << "                                      .         ;  " << std::endl;
        ofs << "         .              .              ;%     ;;   " << std::endl;
        ofs << "           ,           ,                :;%  %;   " << std::endl;
        ofs << "            :         ;                   :;%;'     .,   " << std::endl;
        ofs << "   ,.        %;     %;            ;        %;'    ,;" << std::endl;
        ofs << "     ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
        ofs << "      %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
        ofs << "       ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
        ofs << "        `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
        ofs << "         `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
        ofs << "            `:%;.  :;bd%;          %;@%;'" << std::endl;
        ofs << "              `@%:.  :;%.         ;@@%;'   " << std::endl;
        ofs << "                `@%.  `;@%.      ;@@%;         " << std::endl;
        ofs << "                  `@%%. `@%%    ;@@%;        " << std::endl;
        ofs << "                    ;@%. :@%%  %@@%;       " << std::endl;
        ofs << "                      %@bd%%%bd%%:;     " << std::endl;
        ofs << "                        #@%%%%%:;;" << std::endl;
        ofs << "                        %@@%%%::;" << std::endl;
        ofs << "                        %@@@%(o);  . '         " << std::endl;
        ofs << "                        %@@@o%;:(.,'         " << std::endl;
        ofs << "                    `.. %@@@o%::;         " << std::endl;
        ofs << "                       `)@@@o%::;         " << std::endl;
        ofs << "                        %@@(o)::;        " << std::endl;
        ofs << "                       .%@@@@%::;         " << std::endl;
        ofs << "                       ;%@@@@%::;.          " << std::endl;
        ofs << "                      ;%@@@@%%:;;;. " << std::endl;
        ofs << "                  ...;%@@@@@%%:;;;;,..    Gilo97" << std::endl;
		ofs.close();
	}
}