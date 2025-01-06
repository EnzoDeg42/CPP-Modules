/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:56:44 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/28 20:06:56 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

Intern::~Intern()
{
}

Intern::Intern(const Intern& copy)
{
    (void)copy;
}

Intern& Intern::operator=(const Intern& copy)
{
    (void)copy;
    return (*this);
}

AForm* Intern::makeForm(std::string const name, std::string const target)
{
    AForm* forms[3] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };
    
    std::string names[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    for (int i = 0; i < 3; i++)
    {
        if (name != names[i])
            continue;
        std::cout << "Intern creates " << name << std::endl;
        for (int j = 0; j < 3; j++)
        {
            if (j != i)
                delete forms[j];
        }
        return forms[i];
    }

    for (int i = 0; i < 3; i++)
        delete forms[i];
    throw Intern::FormNotFoundException();
}

const char *Intern::FormNotFoundException::what() const throw()
{
    return "Error: form not found.";
}