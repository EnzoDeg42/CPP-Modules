/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:06:04 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/29 11:11:25 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(T& a, T& b)
{
    if (a < b)
        return a;
    return b;
}

template <typename T>
T max(T& a, T& b)
{
    if (a > b)
        return a;
    return b;
}