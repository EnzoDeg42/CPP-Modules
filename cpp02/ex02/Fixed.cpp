/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:00:20 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/05 14:12:13 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed() : _fixed_point_value(0)
{

}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int value)
{
	_fixed_point_value = value << _n_fract_bits;
}

Fixed::Fixed(const float value)
{
	_fixed_point_value = roundf(value * (1 << _n_fract_bits));
}

// Destructor
Fixed::~Fixed()
{
    
}

// Overloaded Operators
Fixed & Fixed::operator = (Fixed const & rhs)
{
	if (this != &rhs)
        _fixed_point_value = rhs.getRawBits();
    return (*this);
}

float	Fixed::operator>(Fixed fixed) const
{
    return (toFloat() > fixed.toFloat());
}

float	Fixed::operator<(Fixed fixed) const
{
    return (toFloat() < fixed.toFloat());
}

float	Fixed::operator>=(Fixed fixed) const
{
    return (toFloat() >= fixed.toFloat());
}

float	Fixed::operator<=(Fixed fixed) const
{
    return (toFloat() <= fixed.toFloat());
}

float	Fixed::operator==(Fixed fixed) const
{
    return (toFloat() == fixed.toFloat());
}

float	Fixed::operator!=(Fixed fixed) const
{
    return (toFloat() != fixed.toFloat());
}

// Arithmetic operators
float	Fixed::operator+(Fixed fixed) const
{
	return (toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const
{
    return (toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const
{
    return (toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const
{
    return (toFloat() / fixed.toFloat());
}

// Pre/Post increment operators
Fixed	Fixed::operator++()
{
	_fixed_point_value++;
    return (*this);
}

Fixed	Fixed::operator--()
{
    _fixed_point_value--;
    return (*this);
}

Fixed	Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed	Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

// Out of class
std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}
