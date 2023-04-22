/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 23:53:57 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/22 21:27:58 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array{
	public:
		Array()
		{
			this->a = NULL;
			this->lenght = 0;
		}
		Array(uint n)
		{
			this->a = new T[n];
			this->lenght = n;
		}
		Array &operator=(Array &instance)
		{
			if (this->lenght != 0)
			{
				delete [] this->a;
			}
			this->a = new T[instance.lenght];
			int i = 0;
			while (i < instance.lenght)
			{
				this->a[i] = instance.a[i];
				i++;
			}
			this->lenght = instance.lenght;
			return(*this);
		}
		Array(Array &instance)
		{
			this->lenght = 0;
			*this = instance;
		}
		class OutOfRange : public std::exception
		{
			public:
				const char*	what() const throw();
		};
		T &operator[](int inutil)
		{
			if (inutil >= this->lenght || inutil < 0)
				throw OutOfRange();
			else
				return(this->a[inutil]);
		}
		int size()
		{
			return(this->lenght);
		}
	private:	
		T	*a;
		int lenght;
};

template<class T>
const char* Array<T>::OutOfRange::what() const throw()
{
	return ("Index is out of range");
}

#endif