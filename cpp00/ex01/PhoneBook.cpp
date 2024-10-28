/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:12:17 by edegraev          #+#    #+#             */
/*   Updated: 2024/07/18 09:35:14 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	// std::cout << "Construct phone" << std::endl;
}

int PhoneBook::GetLastId(void)
{
	int id = -1;

	for (int i = 0; i < 8; i++)
	{
		if (table[i].GetFirst() != "" && table[i].GetId() > id)
			id = table[i].GetId();
	}
	return id;
}

int PhoneBook::GetFirstId(void)
{
	int id = GetLastId();

	for (int i = 0; i < 8; i++)
	{
		if (table[i].GetFirst() != "" && table[i].GetId() < id)
			id = table[i].GetId();
	}
	return id;
}

void PhoneBook::Add(std::string first, std::string last, std::string nick, std::string phone, std::string secret)
{
	int last_id = GetLastId();
	
	if (last_id >= 7)
	{
		
		table[GetFirstId()].Set(last_id + 1, first, last, nick, phone, secret);
		return;
	}

	for (int i = 0; i < 8; i++)
	{
		if (table[i].GetFirst() == "")
		{
			table[i].Set(last_id + 1, first, last, nick, phone, secret);
			break;
		}
	}
}

void PhoneBook::PrintColumn(std::string text)
{
	int len = text.length();
	
	if (len > 10)
	{
		std::cout << text.substr(0, 9) << ".";
		return;	
	}
	std::cout << text;
	for (int i = 0; i < 10 - len; i++)
		std::cout << " ";
}

void PhoneBook::PrintTable(void)
{
	for (int i = 0; i < 8; i++)
	{
		if (table[i].GetFirst() != "")
		{
			PrintColumn(table[i].GetFirst());
			std::cout << " | ";
			PrintColumn(table[i].GetLast());
			std::cout << " | ";
			PrintColumn(table[i].GetNick());
			std::cout << " | ";
			PrintColumn(table[i].GetPhone());
			std::cout << " | ";
			PrintColumn(table[i].GetSecret());
			std::cout << std::endl;
		}
	}
}

bool PhoneBook::PrintData(int index)
{
    if (index < 0 || index > 7)
    {
        std::cout << "Index out of range or invalid" << std::endl;
        return false;
    }
    if (table[index].GetFirst() == "")
    {
        std::cout << "No data" << std::endl;
        return false;
    }
    std::cout << "First name: " << table[index].GetFirst() << std::endl;
    std::cout << "Last name: " << table[index].GetLast() << std::endl;
    std::cout << "Nickname: " << table[index].GetNick() << std::endl;
    std::cout << "Phone number: " << table[index].GetPhone() << std::endl;
    std::cout << "Darkest secret: " << table[index].GetSecret() << std::endl;
    return true;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Unconstruct phone" << std::endl;
}

