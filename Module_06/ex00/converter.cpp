/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 21:20:53 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/16 21:26:38 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

void    detect_type(std::string arg)
{
	if (is_specialcase(arg))
		from_specialcase(arg);
	else if (is_char(arg))
		from_char(arg[0]);
	else if (is_int(arg))
		from_int(atoi(arg.c_str()));
	else if (is_float(arg))
		from_float(atof(arg.c_str()));
	else if (is_double(arg))
		from_double(atof(arg.c_str()));
	else
		std::cout << "Error: Invalid input" << std::endl;
}

void    from_char(char x)
{
	std::cout << "char: '" << x << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(x) << std::endl;
	std::cout << "float: " << static_cast<float>(x) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(x) << ".0" << std::endl;
}

void    from_int(int x)
{
	if (x < 32 || x > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(x) << "'" << std::endl;
	std::cout << "int: " << x << std::endl;
	std::cout << "float: " << static_cast<float>(x) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(x) << ".0" << std::endl;
}

void    from_float(float x)
{
	if (x < 32 || x > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(x) << "'" << std::endl;
	if (x > INT_MAX || x < INT_MIN)
		std::cout << "int: Conversion overflows" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(x) << std::endl;
	std::cout << "float: " << x << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(x) << ".0" << std::endl;
}

void    from_double(float x)
{
	if (x < 32 || x > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(x) << "'" << std::endl;
	if (x > INT_MAX || x < INT_MIN)
		std::cout << "int: Conversion overflows" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(x) << std::endl;
	std::cout << "float: " << static_cast<float>(x) << ".0f" << std::endl;
	std::cout << "double: " << x << ".0" << std::endl;
}

void	from_specialcase(std::string arg)
{
	float	f;

	std::string cases[] = {"inf", "+inf", "-inf", "nan", "inff", "+inff",
		"-inff", "nanf"};
	if (arg == cases[0] || arg == cases[1] || arg == cases[4] || arg == cases[5])
        f = 1.0 / 0.0;
    else if (arg == cases[2] || arg == cases[6])
        f = -1.0 / 0.0;
    else
        f = 0.0 / 0.0;
    std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

//----------is what type ---------//


bool	is_char(std::string arg)
{
	if (!(isalpha(arg[0]) || arg[0] == 32))
		return (0);
	int		i = 1;
	while (arg[i])
	{
		if (!isprint(arg[i]))
			return (0);
		i++;
	}
	return (1);
}

bool    is_int(std::string arg)
{
	int		i = 0;

	if (arg[i] && (arg[i] == '-' || arg[i] == '+'))
		i++;
	while (arg[i])
	{
		if (!isdigit(arg[i]))
			return (0);
		i++;
	}
	
	float	nb = atof(arg.c_str());
	if (nb >  INT_MAX || nb < INT_MIN)
		return (0);
	return (1);
}

bool	is_float(std::string arg)
{
	int		i = 0;
	int		icpy = 0;

	if (arg[i] && (arg[i] == '-' || arg[i] == '+'))
		i++;
	while (arg[i])
		i++;
	if (arg[i - 1] != 'f')
		return (0);
	while (icpy < i - 1)
	{
		if (!isdigit(arg[icpy]))
			return (0);
		icpy++;
	}
	double	nb = atof(arg.c_str());
	if (nb > FMAX || nb < FMIN)
		return (0);
	return (1);
}

bool	is_double(std::string arg)
{
	int		i = 0;
	int		dot = 0;

	if (arg[i] && (arg[i] == '-' || arg[i] == '+'))
		i++;
	while (arg[i])
	{
		if (!isdigit(arg[i]))
		{
			if (arg[i] == '.')
				dot++;
			else
				return (0);
			if (dot > 1)
				return (0);
		}
		i++;
	}
	return (1);
}

bool	is_specialcase(std::string arg)
{
	if (arg == "nan" || arg == "nanf" || arg == "+inf" || arg == "+inff" || arg == "-inf" 
		|| arg == "-inff" ||  arg == "inf" || arg == "inff")
		return (1);
	return (0);
}