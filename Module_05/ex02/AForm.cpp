/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:21:58 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/16 19:24:21 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//====--- Constructors ---===//

AForm::AForm() :
	_name ("no name"),
	_signature (false),
	_required_to_sig (0),
	_required_to_exect (0)
{}

AForm::AForm(std::string name, bool signature, const int required_to_sig, const int required_to_exect) :
	_name (name),
	_required_to_sig (required_to_sig),
	_required_to_exect (required_to_exect)
{
	this->_signature=signature;
	if (required_to_sig > 150 || required_to_exect > 150)
		throw AForm::GradeTooLowException();
	if (required_to_sig < 1 || required_to_exect < 1)
		throw AForm::GradeTooLowException();
}

AForm::~AForm(){}

AForm::AForm(AForm &instance) :
	_name (instance._name),
	_required_to_sig (instance._required_to_sig),
	_required_to_exect (instance._required_to_exect)
{
	this->_signature=instance._signature;

	if (instance._required_to_sig > 150 || instance._required_to_exect > 150)
		throw AForm::GradeTooLowException();
	if (instance._required_to_sig < 1 || instance._required_to_exect < 1)
		throw AForm::GradeTooLowException();
}

//====--- Operator overload ---===//

AForm& AForm::operator=(const AForm &instance){
	this->_signature = instance._signature;
	return(*this);
}

//====--- getter ---===//

const std::string	AForm::getName()
{
	return (this->_name);
}

int					AForm::getSignGrade()
{
	return (this->_required_to_sig);
}

int					AForm::getExecGrade()
{
	return (this->_required_to_exect);
}

int					AForm::getStatus()
{
	return (this->_signature);
}

//====--- Exceptions ---===//


void				AForm::beSigned(Bureaucrat implement)
{
	if (implement.getGrade() > this->_required_to_sig)
		throw (AForm::GradeTooLowException());
	else
		this->_required_to_sig = 1;
}

void				AForm::beExecuted(Bureaucrat implement)
{
	if (!this->_required_to_sig)
		throw (std::string("the form is not signed"));
	if (implement.getGrade() > this->_required_to_exect)
		throw (AForm::GradeTooLowException());
	else
		this->execute();
}

//====--- Exceptions ---===//

const char *AForm::GradeTooHighException::what () const throw ()
{
	return "grade is too high";
}

const char *AForm::GradeTooLowException::what () const throw ()
{
	return "grade is too low";
}
