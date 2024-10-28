/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:00:21 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/23 13:55:43 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// int main( void )
// {
// 	Fixed a;
// 	Fixed const b( 10 );
// 	Fixed const c( 42.42f );
// 	Fixed const d( b );
	
// 	a = Fixed( 1234.4321f );

// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
	
// 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

//     // min/max
//     std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
//     std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;

//     std::cout << "a + b = " << a + b << std::endl;
//     std::cout << "a - b = " << a - b << std::endl;
//     std::cout << "a * b = " << a * b << std::endl;
//     std::cout << "a / b = " << a / b << std::endl;

//     std::cout << "a > b = " << (a > b) << std::endl;
//     std::cout << "a < b = " << (a < b) << std::endl;
//     std::cout << "a >= b = " << (a >= b) << std::endl;
//     std::cout << "a <= b = " << (a <= b) << std::endl;
//     std::cout << "a == b = " << (a == b) << std::endl;
//     std::cout << "a != b = " << (a != b) << std::endl;
    
//     std::cout << "a++ = " << a++ << std::endl;
//     std::cout << "a = " << a << std::endl;
//     std::cout << "a-- = " << a-- << std::endl;
//     std::cout << "a = " << a << std::endl;
//     std::cout << "++a = " << ++a << std::endl;
//     std::cout << "a = " << a << std::endl;
//     std::cout << "--a = " << --a << std::endl;
//     std::cout << "a = " << a << std::endl;

// 	return 0;
// }


// int main( void )
// {
//     Fixed a;
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//     std::cout << a << std::endl;
//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;
//     std::cout << b << std::endl;
//     std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }

int main()
{
    Fixed a(5.0f);
    Fixed b(5.11954689489f);
    
    std::cout << a << std::endl;
    std::cout << a.getRawBits() << std::endl;

    std::cout << b << std::endl;
    std::cout << b.getRawBits() << std::endl;
}