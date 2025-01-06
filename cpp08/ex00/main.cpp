/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:57:37 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/02 14:05:52 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream> // std::cout
#include <vector>   // std::vector
#include <list>     // std::list

#include <iostream>
#include <vector>
#include <list>
#include <stdexcept>

int main()
{
    {
        std::vector<int> myints;
        myints.push_back(10);
        myints.push_back(20);
        myints.push_back(30);
        myints.push_back(40);
        try
        {
            int result = easyfind(myints, 30);
            std::cout << "Element found (vector): " << result << '\n';
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << '\n';
        }
    }
    {
        std::list<int> mylist;
        mylist.push_back(50);
        mylist.push_back(60);
        mylist.push_back(70);
        mylist.push_back(80);
        try
        {
            int result = easyfind(mylist, 70);
            std::cout << "Element found (list): " << result << '\n';
        }
        catch (const std::exception &e)
        {
            std::cout << "Element not found" << '\n';
        }
    }
}
