/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:12:17 by edegraev          #+#    #+#             */
/*   Updated: 2024/07/06 10:39:09 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	// std::cout << "Construct phone" << std::endl;
}

Contact::~Contact(void)
{
	// std::cout << "Unconstruct phone" << std::endl;
}


void Contact::Set(int id, std::string first, std::string last, std::string nick, std::string phone, std::string secret)
{
    this->id = id;
	this->first = first;
	this->last = last;
	this->nick = nick;
	this->phone = phone;
	this->secret = secret;
}

int Contact::GetId()
{
    return (this->id);
}

std::string Contact::GetFirst()
{
	return (this->first);
}

std::string Contact::GetLast()
{
	return (this->last);
}

std::string Contact::GetNick()
{
	return (this->nick);
}

std::string Contact::GetPhone()
{
	return (this->phone);
}

std::string Contact::GetSecret()
{
	return (this->secret);
}