/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:21:53 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/16 19:19:27 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class AForm {
	private:
		const std::string _name;
		bool _signature;
		const int _required_to_sig;
		const int _required_to_exect;
	public:
		AForm();
		AForm(std::string name, bool signature, const int required_to_sig, const int required_to_exect);
		~AForm();
		AForm(AForm &instance);
		AForm &operator=(const AForm &instance);

		const std::string	getName();
		int					getSignGrade();
		int					getExecGrade();
		int					getStatus();

		void				incGrade();
		void				decGrade();
		void				beSigned(Bureaucrat implement);
		void				beExecuted(Bureaucrat implement);

		virtual void		execute() const = 0;
		
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