/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:00:21 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/03 11:48:35 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Constructeur par défaut
// Constructeur de recopie
// Opérateur d’affectation
// Destructeur

#include "Fixed.hpp"

#include <iostream>

int main( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	return 0;
}