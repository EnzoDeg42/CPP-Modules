/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:28:24 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/23 13:03:02 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "🐾 Animal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "🐾 Animal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << "🐾 Animal copy constructor called" << std::endl;
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "🐾 Animal assignation operator called" << std::endl;
	type = other.type;
	return (*this);
}

void AAnimal::makeSound() const
{
	std::cout << "... generic animal sound ...\n";
}

std::string AAnimal::getType() const
{
	return (type);
}
