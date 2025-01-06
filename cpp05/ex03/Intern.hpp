/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:13:08 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/27 09:09:45 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
public:
    Intern();
    ~Intern();
    Intern(const Intern& copy);
    Intern& operator=(const Intern& copy);

    AForm* makeForm(std::string const name, std::string const target);

    class FormNotFoundException : public std::exception
    {
        const char *what() const throw();
    };
};


