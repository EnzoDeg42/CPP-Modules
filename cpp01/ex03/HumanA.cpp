/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:28:03 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/02 09:40:45 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
    std::cout << "HumanA " << this->_name << " created with ";
    std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{

}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his ";
    std::cout << this->_weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon weapon)
{
    std::cout << "Weapon set to " << weapon.getType() << std::endl;
    this->_weapon = weapon;
}
