/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:12:55 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/21 14:20:11 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const targetName) : AForm("RobotomyRequestForm", targetName, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this == &other)
        return *this;
    AForm::operator=(other);
    return *this;
}

void RobotomyRequestForm::action() const
{
    std::cout << "* drilling noises *" << std::endl;
    if (rand() % 2)
        std::cout << getTarget() << " has been robotomized successfully." << std::endl;
    else
        std::cout << getTarget() << " robotomization failed." << std::endl;
}