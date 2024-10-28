/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:44:36 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/02 13:24:12 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl is waking up." << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl is going to sleep." << std::endl;
}

void Harl::debug(void)
{
	std::cout << BLUE << "[DEBUG] ";
	std::cout << "J'aime beacoup les doubles Whooper.";
	std::cout << DEFAULT << std::endl;
}

void Harl::info(void)
{
	std::cout << GRAY << "[INFO] ";
	std::cout << "Un double Whooper coute plus cher qu'un simple.";
	std::cout << DEFAULT << std::endl;
}

void Harl::warning(void)
{
	std::cout << YELLOW << "[WARNING] ";
	std::cout << "Je vais demander un supplément de sauce.";
	std::cout << DEFAULT << std::endl;
}

void Harl::error(void)
{
	std::cout << RED << "[ERROR] ";
	std::cout << "Le serveur a renversé mon Coca-Cola.";
	std::cout << DEFAULT << std::endl;
}

void Harl::complain(std::string level)
{
	typedef void (Harl::*HarlMemFn)(); 
	struct LevelFunction {
		std::string level;
		HarlMemFn function;
	};

	LevelFunction levels[] = {
        {"debug", &Harl::debug},
        {"info", &Harl::info},
        {"warning", &Harl::warning},
        {"error", &Harl::error},
    };
	
	for (int i = 0; i < 4; ++i) {
        if (levels[i].level == level) {
            (this->*(levels[i].function))();
            return;
        }
    }
	std::cout << "Unknown level." << std::endl;
}
