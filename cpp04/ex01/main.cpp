/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:28:46 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/23 10:49:17 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "=== Test with Cat and Dog" << std::endl;
		
		const Animal* cat = new Cat();
		const Animal* dog = new Dog();

		delete cat;
		delete dog;
		std::cout << "=== End of test\n" << std::endl;
	}
	{
		std::cout << "=== Subject Test" << std::endl;
		
		const Animal* meta[10];

		for (int i = 0; i < 5; i++)
			meta[i] = new Dog();
		for (int i = 5; i < 10; i++)
			meta[i] = new Cat();

		for (int i = 0; i < 10; i++)
			delete meta[i];

		std::cout << "=== End of test\n" << std::endl;
	}
}
