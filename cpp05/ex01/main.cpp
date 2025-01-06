/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:24:27 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/04 13:14:04 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat *bureaucrat = new Bureaucrat("Enzo", 1);
    Form *si_form = new Form("SI_Form", 1, 1);
    Form *rh_form = new Form("RH_Form", 2, 1);

    std::cout << *bureaucrat << std::endl;
    std::cout << *si_form << std::endl;
    std::cout << *rh_form << std::endl;

    try
    {
        bureaucrat->signForm(*si_form);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        bureaucrat->signForm(*rh_form);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    delete bureaucrat;
    delete si_form;
    delete rh_form;

	return 0;
}