/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:03:47 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/29 14:11:24 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    if (this != &other){}
    return *this;
}

bool ScalarConverter::isChar(const std::string str)
{
    if (str.size() == 1 && !std::isdigit(str[0]))
        return true;
    if (str.size() == 3 && str[0] == '\"' && str[2] == '\"')
        return true;
    return false;
}

bool ScalarConverter::isInt(const std::string str)
{
    if (str.empty())
        return false;

    bool isNegative = (str[0] == '-');
    bool isPositive = (str[0] == '+');
    size_t start = (isNegative || isPositive) ? 1 : 0;

    if (start == 1 && str.size() == 1)
        return false;

    for (size_t i = start; i < str.size(); ++i)
    {
        if(!std::isdigit(str[i]))
            return false;
    }

    try
    {
        long int result = std::atol(str.c_str());
		if (result < INT_MIN || result > INT_MAX)
			return (false);
    }
    catch (...)
    {
        return false;
    }

    return true;
}

void ScalarConverter::toChar(const std::string str)
{
    char c;
    if (str.size() == 3 && str[0] == '\"' && str[2] == '\"')
        c = str[1];
    else
        c = str[0];
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);

    if (std::isprint(c))
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}

void ScalarConverter::toInt(const std::string str)
{
    int i = std::atoi(str.c_str());
    float f = static_cast<float>(i);

    if (!(i >= std::numeric_limits<char>::min() && i <= std::numeric_limits<char>::max()))
        std::cout << "char: Impossible" << std::endl;
    else if (std::isprint(i))
    {
        char c = static_cast<char>(i);
        std::cout << "char: '" << c << "'" << std::endl;   
    }
    else
        std::cout << "char: Non displayable" << std::endl;

    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    std::cout << "double: " << i << std::endl;
}

bool ScalarConverter::isFloat(const std::string str)
{
    if (str.empty())
        return false;

    bool isNegative = (str[0] == '-');
    bool isPositive = (str[0] == '+');
    size_t start = (isNegative || isPositive) ? 1 : 0;

    if (start == 1 && str.size() == 1)
        return false;

    bool hasDot = false;
    bool hasF = false;
    for (size_t i = start; i < str.size(); ++i)
    {
        if (str[i] == '.')
        {
            if (hasDot || i == str.size() - 1)
                return false;
            hasDot = true;
        }
        else if (str[i] == 'f' && i == str.size() - 1)
            hasF = true;
        else if (!std::isdigit(str[i]))
            return false;
    }
    if (!hasF)
        return false;
    if (hasDot && str[str.size() - 2] == '.')
        return false;
    return true; 
}

bool ScalarConverter::isDouble(const std::string str)
{
    if (str.empty())
        return false;

    bool isNegative = (str[0] == '-');
    bool isPositive = (str[0] == '+');
    size_t start = (isNegative || isPositive) ? 1 : 0;

    if (start == 1 && str.size() == 1)
        return false;

    bool hasDot = false;
    for (size_t i = start; i < str.size(); ++i)
    {
        if (str[i] == '.')
        {
            if (hasDot || i == str.size() - 1)
                return false;
            hasDot = true;
        }
        else if (!std::isdigit(str[i]))
            return false;
    }
    if (hasDot && (str[str.size() - 1] == '.' || str[0] == '.'))
        return false;
    return true;
}

int ScalarConverter::detectPrecision(const std::string& str)
{
    size_t dotPos = str.find('.');
    if (dotPos == std::string::npos)
        return 0;

    size_t digitsAfterDot = 0;
    for (size_t i = dotPos + 1; i < str.size(); ++i) {
        if (std::isdigit(str[i]))
            ++digitsAfterDot;
        else
            break;
    }
    return digitsAfterDot;
}

void ScalarConverter::toDouble(const std::string str)
{
    double d = std::strtod(str.c_str(), NULL);
    float f = std::atof(str.c_str());
    int p = detectPrecision(str);

    // char
    if (std::isnan(d) || std::isinf(d) || !(d >= std::numeric_limits<char>::min() && d <= std::numeric_limits<char>::max()))
        std::cout << "char: Impossible" << std::endl;
    else if (std::isprint(static_cast<int>(d)))
    {
        char c = static_cast<char>(d);
        std::cout << "char: '" << c << "'" << std::endl;
    }
    else
        std::cout << "char: Non displayable" << std::endl;

    // int
    if (std::isnan(d) || std::isinf(d) || d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
        std::cout << "int: Impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(d) << std::endl;

    // float
    if (std::isnan(d) || std::isinf(d) || d > std::numeric_limits<float>::max() || d < -std::numeric_limits<float>::max())
        std::cout << "float: Impossible" << std::endl;
    else
        std::cout << "float: " << std::fixed << std::fixed << std::setprecision(p) << f << "f" << std::endl;

    // double
    std::cout << "double: " << std::fixed <<  std::fixed << std::setprecision(p) << d << std::endl;
}


bool ScalarConverter::funcase(const std::string str)
{
    if (str == "inf")
    {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: " << "inf" << std::endl;
        std::cout << "double: " << "inf" << std::endl;
        return true;
    }
    if (str == "nan")
    {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: " << "nanf" << std::endl;
        std::cout << "double: " << "nan" << std::endl;
        return true;
    }
    return false;
}

void ScalarConverter::toFloat(const std::string str)
{
    float f = std::atof(str.c_str());
    double d = static_cast<double>(f);

    // char
    if (std::isnan(f) || std::isinf(f) || !(f >= std::numeric_limits<char>::min() && f <= std::numeric_limits<char>::max()))
        std::cout << "char: Impossible" << std::endl;
    else if (std::isprint(static_cast<int>(f)))
    {
        char c = static_cast<char>(f);
        std::cout << "char: '" << c << "'" << std::endl;
    }
    else
        std::cout << "char: Non displayable" << std::endl;

    // int
    if (std::isnan(f) || std::isinf(f) || f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
        std::cout << "int: Impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(f) << std::endl;

    // float double
    std::cout << "float: " << std::fixed << std::setprecision(detectPrecision(str)) << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(detectPrecision(str)) << d << std::endl;
}


void ScalarConverter::convert(const std::string str)
{
    // char
    if (isChar(str))
    {
        // std::cout << "isChar" << std::endl;
        toChar(str);
        return;
    }
    // int
    if (isInt(str))
    {
        // std::cout << "isInt" << std::endl;
        toInt(str);
        return;
    }
    // float
    if (isFloat(str))
    {
        // std::cout << "isFloat" << std::endl;
        toFloat(str);
        return;
    }
    // double
    if (isDouble(str))
    {
        // std::cout << "isDouble" << std::endl;
        toDouble(str);
        return;
    }
    // fun
    if (funcase(str))
    {
        // std::cout << "funcase" << std::endl;
        return;
    }
    std::cout << "Invalid" << std::endl;
}
