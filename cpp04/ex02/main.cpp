/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:28:46 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/23 13:03:59 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "=== Test" << std::endl;
		
		// const AAnimal animal;

		const AAnimal* cat = new Cat();
		const AAnimal* dog = new Dog();

		delete cat;
		delete dog;
		std::cout << "=== End of test\n" << std::endl;
	}
}
