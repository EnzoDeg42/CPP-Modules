/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:04:40 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/28 15:14:15 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <limits.h>
#include <cstdlib>
#include <limits>
#include <cmath>

class ScalarConverter
{
public:
    static void convert(const std::string str);

private:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter &operator=(const ScalarConverter &other);

    static bool isChar(const std::string str);
    static bool isInt(const std::string str);
    static bool isFloat(const std::string str);
    static bool isDouble(const std::string str);

    static void toChar(const std::string str);
    static void toInt(const std::string str);
    static void toDouble(const std::string str);
    static void toFloat(const std::string str);

    static bool funcase(const std::string str);
    static int detectPrecision(const std::string& str);

};


