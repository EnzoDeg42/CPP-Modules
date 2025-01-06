/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:24:27 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/27 09:37:27 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    
    AForm* form1;
    AForm* form2;
    AForm* form3;
    AForm* form4;
    
    form1 = someRandomIntern.makeForm("shrubbery creation", "Jardin");
    form2 = someRandomIntern.makeForm("robotomy request", "Conor");
    form3 = someRandomIntern.makeForm("presidential pardon", "Macron");
    
    try
    {
        form4 = someRandomIntern.makeForm("gigachad train", "Enzo");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete form1;
    delete form2;
    delete form3;

	return 0;
}