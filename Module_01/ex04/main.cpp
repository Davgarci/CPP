/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 00:15:23 by davgarci          #+#    #+#             */
/*   Updated: 2023/04/05 03:16:48 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

// Argumentos: Un nombre de archivo y dos strings, s1 y s2

int		error_control(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Fatal Error: Please input 3 arguments" << std::endl;
		return (1);
	}
	std::ifstream	test;
	std::string		read;
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	test.open(argv[1]);
	if (test.is_open() == false)
	{
		std::cout << "Fatal Error: Invalid filename" << std::endl;
		return (1);
	}
	std::getline(test, read);
	if (read.empty())
	{
		std::cout << "Fatal Error: Empty file" << std::endl;
		return (1);
	}
	if (str1.empty() || str2.empty() || str1 == str2)
	{
		std::cout << "Fatal Error: Plese input 2 valid strings" << std::endl;
		return (1);
	}
	test.close();
	return (0);
}


int main(int argc, char** argv){
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		s1;
	std::string		s2;
	std::string		file;
	std::string		read;
	std::string		read2;
	size_t			found;

	if (error_control(argc, argv))
		return (0);
	s1 = argv[2];
	s2 = argv[3];
	file = argv[1];
	ifs.open(file);
	ofs.open(file + ".replace");
	std::getline(ifs, read);
		while (!read.empty())
	{
		found = read.find(s1);
		while (found != std::string::npos)
		{
			//std::cout << read << std::endl;
			read2.assign(read, 0, found);
			//std::cout << read2 << std::endl;
			read2.append(s2);
			//std::cout << read2 << std::endl;
			read2.append(read.begin() + found + s1.size(), read.end());
			//std::cout << read2 << std::endl;
			read.assign(read2);
			found = read.find(s1);
		}
		ofs << read;
		ofs << std::endl;
		read.clear();
		std::getline(ifs, read);
	}
	ifs.close();
	ofs.close();
	return (0);
}