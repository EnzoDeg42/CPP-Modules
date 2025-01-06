/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:17:03 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/29 18:41:24 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void iter(T* array, size_t size, void (*f)(T&))
{
    for (size_t i = 0; i < size; i++)
        f(array[i]);
}

template <typename T>
void iter(T* array, size_t size, void (*f)(T const&))
{
    for (size_t i = 0; i < size; i++)
        f(array[i]);
}