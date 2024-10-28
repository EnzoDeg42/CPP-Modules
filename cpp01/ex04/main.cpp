/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:35:25 by edegraev          #+#    #+#             */
/*   Updated: 2024/07/18 13:09:31 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void find_and_replace(std::string& data, const std::string& search, const std::string& replace)
{
	size_t pos = 0;
	while ((pos = data.find(search, pos)) != std::string::npos)
	{
		data.erase(pos, search.length());
		data.insert(pos, replace);
		pos += replace.length();
	}
}

void write_file(std::string filename, std::string data)
{
	std::ofstream outfile;
	
	outfile.open(std::string(filename + ".replace").c_str());
	outfile << data;
	outfile.close();
}

int	main(int argc, char **argv)
{
	char c;
	std::ifstream infile;
	std::string data;
	
	if (argc != 4)
	{
		std::cerr << "sed file string1 string2" << std::endl;
		return 1;
	}
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cerr << "Error: " << argv[1] << ": no such file or directory" << std::endl;
		return 1;
	}
	while(infile >> std::noskipws >> c && !infile.eof())
		data += c;
	infile.close();
	find_and_replace(data, argv[2], argv[3]);
	write_file(argv[1], data);
	return 0;
}