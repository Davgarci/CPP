/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:21:58 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/14 20:11:23 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//====--- Constructors ---===//

Form::Form() :
	_name ("no name"),
	_signature (false),
	_required_to_sig (0),
	_required_to_exect (0)
{}

Form::Form(std::string name, bool signature, const int required_to_sig, const int required_to_exect) :
	_name (name),
	_required_to_sig (required_to_sig),
	_required_to_exect (required_to_exect)
{
	this->_signature=signature;
	if _required_to_sig >
}

Form::~Form(){}

Form::Form(Form &instance) :
	_name (instance._name),
	_required_to_sig (instance._required_to_sig),
	_required_to_exect (instance._required_to_exect)
{
	this->_signature=instance._signature;	
}

//====--- Operator overload ---===//

Form& Form::operator=(const Form &instance){
	this->_signature = instance._signature;
	return(*this);
}

//====--- Exceptions ---===//

const char *Form::GradeTooHighException::what () const throw ()
{
	return "grade is too high";
}

const char *Form::GradeTooLowException::what () const throw ()
{
	return "grade is too low";
}
