/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:28:59 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/14 18:11:04 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "Bureaucrats" << std::endl;

	try
	{	
		Bureaucrat first("First", 42);

		std::cout << "-------" << std::endl;
		std::cout << first << std::endl;
		std::cout << "-------" << std::endl;

		std::cout << "1. " << std::endl;
		first.DownGrade();

		std::cout << "-------" << std::endl;
		std::cout << first << std::endl;
		std::cout << "=======" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
/*	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what();
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what();
	}*/


	try
	{
		Bureaucrat second("Second", 155);

		std::cout << "-------" << std::endl;
		std::cout << second << std::endl;
		std::cout << "-------" << std::endl;

		std::cout << "2. ";
		second.DownGrade();

		std::cout << "-------" << std::endl;
		std::cout << second << std::endl;
		std::cout << "=======" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
/*	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what();
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what();
	}*/


	try
	{
		Bureaucrat third("Third", 1);
		Bureaucrat fourth(third);

		std::cout << "-------" << std::endl;
		std::cout << third << std::endl;
		std::cout << fourth << std::endl;
		std::cout << "-------" << std::endl;

		std::cout << "3. ";
		third.UpGrade();
		std::cout << "4. ";
		third.DownGrade();

		std::cout << "\n-------" << std::endl;
		std::cout << third << std::endl;
		std::cout << fourth << std::endl;
		std::cout << "=======" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}

	std::cout << "Done" << std::endl;
}