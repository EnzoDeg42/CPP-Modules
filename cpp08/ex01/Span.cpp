/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:13:59 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/04 10:42:25 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(Span const &rhs)
{
    *this = rhs;
}

Span &Span::operator=(Span const &rhs)
{
    if (this != &rhs)
    {
        _n = rhs._n;
        _v = rhs._v;
    }
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if (_v.size() < _n)
        _v.push_back(n);
    else
        throw std::exception();
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_v.size() + std::distance(begin, end) > _n)
        throw std::exception();
    _v.insert(_v.end(), begin, end);
}


int Span::shortestSpan()
{
    if (_v.size() < 2)
        throw std::exception();
    std::vector<int> tmp = _v;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (size_t i = 1; i < tmp.size() - 1; i++)
    {
        if (tmp[i + 1] - tmp[i] < min)
            min = tmp[i + 1] - tmp[i];
    }
    return (min);
}

int Span::longestSpan()
{
    if (_v.size() < 2)
        throw std::exception();
    std::vector<int> tmp = _v;
    std::sort(tmp.begin(), tmp.end());
    return (tmp[tmp.size() - 1] - tmp[0]);
}