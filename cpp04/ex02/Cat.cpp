/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:44:17 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/23 10:35:51 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() 
{
	type = "Cat";
	brain = new Brain();
	std::cout << "🐱 Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "🐱 Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
	type = other.type;
	brain = new Brain(*other.brain);
	std::cout << "🐱 Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		type = other.type;
		delete brain;
		brain = new Brain(*other.brain);
	}
	std::cout << "🐱 Cat assignation operator called" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaouuuuuu\n";
}
