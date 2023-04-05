/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 03:52:18 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/05 13:00:33 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	
public:

	Harl( void );
	~Harl( void );

	void 	complain( std::string level);

};

#endif