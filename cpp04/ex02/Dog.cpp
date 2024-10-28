/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:33:51 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/23 10:36:43 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "🐶 Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "🐶 Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& other)
{
	type = other.type;
	brain = new Brain(*other.brain);
	std::cout << "🐶 Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		type = other.type;
		delete brain;
		brain = new Brain(*other.brain);
	}	
	std::cout << "🐶 Dog assignation operator called" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wouafff\n";
}