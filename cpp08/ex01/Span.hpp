/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:43:33 by edegraev          #+#    #+#             */
/*   Updated: 2024/12/04 10:38:22 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>

class Span
{
private:
    unsigned int _n;
    std::vector<int> _v;
public:
    Span();
    Span(unsigned int n);
    ~Span();
    Span(Span const &rhs);
    Span &operator=(Span const &rhs);

    void addNumber(int n);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    int shortestSpan();
    int longestSpan();
    
};

