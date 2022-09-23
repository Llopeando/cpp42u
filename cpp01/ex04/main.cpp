/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:02:04 by ullorent          #+#    #+#             */
/*   Updated: 2022/09/23 11:26:27 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	file_text_replacer(std::string file_name, std::string s1, std::string s2)
{
	std::ifstream ifs;
	std::ofstream ofs;
	std::string getline;
	size_t	c;

	c = 0;
	ifs.open(file_name);
	ofs.open(file_name.append(".replace"), ofs.out); //We get the original file name and we add the .replace extension to it
	if (!ifs.is_open() || !ofs.is_open())
	{
		std::cout << "[!] This file does not exist or an error ocurred" << std::endl;
		return (1);
	}
	while (std::getline(ifs, getline))
	{
		if (std::string::npos != getline.find(s1))
		{
			c = getline.find(s1); //We find the line on the file based on the first string argument
			getline.erase(c, s1.length()); //We erase that line
			getline.insert(c, s2); //We replace the s1 string with the s2 string and insert it in the new '.replace' file
		}
		ofs << getline << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (file_text_replacer(argv[1], argv[2], argv[3]))
			return (1);
	}
	else
	{
		std::cout << "[!] Insufficient arguments" << std::endl;
		return (1);
	}
	return (0);
}
