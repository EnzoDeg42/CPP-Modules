/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:16:57 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/29 14:34:18 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void print(int const& i)
{
    std::cout << i << std::endl;
}

void add_one(int& i)
{
    i++;
}

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};

    iter(array, 5, add_one);
    iter(array, 5, print);

    return (0);
}