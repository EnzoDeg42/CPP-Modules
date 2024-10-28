/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:07:18 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/02 10:42:33 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
    
}

Weapon::~Weapon(void)
{
    
}

void Weapon::setType(std::string type)
{
    this->_type = type;
    std::cout << "Weapon type set to " << this->_type << std::endl;
}

const std::string &Weapon::getType(void)
{
    return (this->_type);
}
