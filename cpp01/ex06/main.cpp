/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:08:58 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/02 15:00:00 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	get_level_number(char *argv)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == argv)
			return (i);
	return (-1);
}

int	main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "Usage: ./HarlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return (1);
	}
	
	int level = get_level_number(argv[1]);
	if (level == -1 || level > 3)
	{
		std::cout << "Unknown level." << std::endl;	
		return (1);
	}
	
	for (int i = level; i <= 3; i++)
	{
		switch (i)
		{
			case 0:
				harl.complain("debug");
				break;
			case 1:
				harl.complain("info");
				break;
			case 2:
				harl.complain("warning");
				break;
			case 3:
				harl.complain("error");
				break;
			default:
				std::cout << "Unknown level." << std::endl;
				return 1;
		}	
	}

	return (0);
}



