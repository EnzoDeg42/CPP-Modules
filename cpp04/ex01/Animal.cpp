/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:28:24 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/23 10:37:37 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "🐾 Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "🐾 Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "🐾 Animal copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "🐾 Animal assignation operator called" << std::endl;
	type = other.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "... generic animal sound ...\n";
}

std::string Animal::getType() const
{
	return (type);
}
