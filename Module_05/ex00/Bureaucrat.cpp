/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:29:57 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/09 19:35:31 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//====--- Constructors ---===//

Bureaucrat::Bureaucrat (const std::string &name, int grade)
{
	_name = name;
	if (grade < 1)
		throw GradeTooHighException ();
	if (grade > 150)
		throw GradeTooLowException ();
	_grade = grade;
}

Bureaucrat::Bureaucrat (const Bureaucrat &instance)
{
	*this = instance;
}

Bureaucrat::~Bureaucrat ()
{}

//====--- Constructors ---===//

Bureaucrat& Bureaucrat::operator= (const Bureaucrat &instance)
{
	_name = instance._name;
	_grade = instance._grade;

	return *this;
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

//====--- Constructors ---===//

const std::string &Bureaucrat::getName () const
{
	return _name;
}

int Bureaucrat::getGrade () const
{
	return _grade;
}

//====--- Non member functions ---===//

std::ostream &operator<< (std::ostream &os, const Bureaucrat &val)
{
	return os << val.getName () << ", bureaucrat grade " << val.getGrade () << ".";
}
