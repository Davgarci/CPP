/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:30:28 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/09 19:35:40 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
# include <iomanip>
# include <string>

class Bureaucrat {
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat ();
		Bureaucrat (const std::string &name, int grade);
		Bureaucrat (const Bureaucrat &instance);
		~Bureaucrat ();
		Bureaucrat& operator= (const Bureaucrat &instance);
	
		const std::string &getName () const;
		int getGrade () const;

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

std::ostream &operator<< (std::ostream &os, const Bureaucrat &incepcion);

#endif