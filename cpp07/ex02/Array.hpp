/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:27:54 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/02 08:58:37 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
private:
    T *_array;
    unsigned int _size;
public:
    Array();
    Array(unsigned int n);
    ~Array();
    Array(Array const &src);
    
    Array &operator=(Array const &rhs);
    T &operator[](unsigned int i);
};

#include "Array.tpp"