/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:21:53 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/14 20:07:45 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
	private:
		const std::string _name;
		bool _signature;
		const int _required_to_sig;
		const int _required_to_exect;
	public:
		Form();
		Form(std::string name, bool signature, const int required_to_sig, const int required_to_exect);
		~Form();
		Form(Form &instance);
		Form &operator=(const Form &instance);
		
		class GradeTooHighException : public std::exception
		{
				public:
					virtual const char *what () const throw ();
		};
			class GradeTooLowException : public std::exception
		{
				public:
					virtual const char *what () const throw ();
		};
};

#endif