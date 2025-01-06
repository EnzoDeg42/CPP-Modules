/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:55:22 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/29 10:55:02 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
    int random = rand() % 3;

    if (random == 0)
        return new A();
    else if (random == 1)
        return new B();
    else
        return new C();
}

void identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	
    if (a != NULL)
		std::cout << "Object type A detected" << std::endl;
	if (b != NULL)
		std::cout << "Object type B detected" << std::endl;
	if (c != NULL)
		std::cout << "Object type C detected" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "Object type A detected " << std::endl;
    }
    catch(...)
    {
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "Object type B detected" << std::endl;
    }
    catch(...)
    {
    }
    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "Object type C detected" << std::endl;
    }
    catch(...)
    {
    }
}

int main(void)
{
    Base* idk;

    srand(time(NULL));
    idk = generate();
    identify(idk);
    identify(*idk);
    delete idk;

    return (0);
}