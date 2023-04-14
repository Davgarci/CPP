/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:29:57 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/14 18:08:45 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//====--- Constructors ---===//

Bureaucrat::Bureaucrat () : _name("no name sorry"), _grade(1) {};

Bureaucrat::Bureaucrat (const std::string &name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException ();
	if (grade > 150)
		throw GradeTooLowException ();
	_grade = grade;
}

Bureaucrat::Bureaucrat (const Bureaucrat &instance) : _name(instance._name)
{
	if (instance._grade < 1)
		throw GradeTooHighException ();
	if (instance._grade > 150)
		throw GradeTooLowException ();
	_grade = instance._grade;
}

Bureaucrat::~Bureaucrat ()
{}

//====--- Operator overload ---===//

Bureaucrat& Bureaucrat::operator= (const Bureaucrat &instance)
{
	//operator is in heap copy constructor in stack ??
	_grade = instance._grade;
	return (*this);
}

//====--- Exceptions ---===//

const char *Bureaucrat::GradeTooHighException::what () const throw ()
{
	return "grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what () const throw ()
{
	return "grade is too low";
}

//====--- Getters ---===//

const std::string &Bureaucrat::getName () const
{
	return _name;
}

int Bureaucrat::getGrade () const
{
	return _grade;
}

//====--- Member functions ---===//

		void Bureaucrat::UpGrade()
		{
				try
				{
					if (this->_grade - 1 <= 0)
						throw Bureaucrat::GradeTooHighException();
					this->_grade--;
				}
				catch (std::exception & e)
				{
					std::cout << e.what();
				}
		}
		void Bureaucrat::DownGrade()
		{
				try
				{
					if (this->_grade + 1 >= 156)
						throw Bureaucrat::GradeTooHighException();
					this->_grade++;
				}
				catch (std::exception & e)
				{
					std::cout << e.what();
				}
		}

//====--- Non member functions ---===//

std::ostream &operator<< (std::ostream &os, const Bureaucrat &val)
{
	return os << val.getName () << ", bureaucrat grade " << val.getGrade () << ".";
}
