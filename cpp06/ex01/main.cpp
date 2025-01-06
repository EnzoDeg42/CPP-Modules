/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:21:50 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/28 20:55:15 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
    Data A;
    
    A.name = "protagoniste";
    A.hasBlahaj = true;
    A.age = 42;

    uintptr_t ptr = Serializer::serialize(&A);

    Data* B = Serializer::deserialize(ptr);
    
    std::cout << "Name: " << B->name << std::endl;
    std::cout << "Has Blahaj: " << B->hasBlahaj << std::endl;
    std::cout << "Age: " << B->age << std::endl;
    
	return (0);
}