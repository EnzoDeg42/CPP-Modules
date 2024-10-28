/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:00:20 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/04 13:13:26 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed() : _fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_point_value = value << _n_fract_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_point_value = roundf(value * (1 << _n_fract_bits));
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Overloaded Operators
Fixed & Fixed::operator = (Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
        _fixed_point_value = rhs.getRawBits();
    return (*this);
}

// Public Methods
float Fixed::toFloat(void) const
{
	return ((float)_fixed_point_value / (1 << _n_fract_bits));
}

int Fixed::toInt(void) const
{
	return (_fixed_point_value >> _n_fract_bits);
}

int Fixed::getRawBits(void) const
{
	return (_fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	_fixed_point_value = raw;
}

// Out of class
std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}
