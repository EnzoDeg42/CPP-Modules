/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:28:46 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/20 14:51:46 by edegraev         ###   ########.fr       */
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
		std::cout << "=== Basic test" << std::endl;
		Animal* animal = new Animal();
		animal->makeSound();

		Dog* dog = new Dog();
		Cat* cat = new Cat();

		dog->makeSound();
		cat->makeSound();
		
		delete dog;
		delete cat;
		delete animal;
		
		std::cout << "=== End of test\n" << std::endl;
	}

	{
		std::cout << "=== Test with Animal, Dog and Cat" << std::endl;
		
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete j;
		delete i;
		delete meta;
		
		std::cout << "=== End of test\n" << std::endl;
	}
	{
		std::cout << "=== Test with WrongAnimal and WrongCat" << std::endl;
	
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();

		delete i;
		delete meta;

		std::cout << "=== End of test\n" << std::endl;
	}
}
