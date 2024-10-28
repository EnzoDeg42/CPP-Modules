/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:43:37 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/25 10:00:19 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _attack_damage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hp = other._hp;
        _energy = other._energy;
        _attack_damage = other._attack_damage;
    }
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hp < 1)
    {
        std::cout << "ClapTrap " << _name << " can't attack because he is dead." << std::endl;
        return;
    }
    if (_energy < 1)
    {
        std::cout << "ClapTrap " << _name << " has not enough energy to attack." << std::endl;
        return;
    }
    _energy--;
    std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hp -= amount;
    if (_hp < 0)
        _hp = 0;
    std::cout << "ClapTrap " << _name << " take " << amount << " points of damage! Current HP: " << _hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_hp < 1)
    {
        std::cout << "ClapTrap " << _name << " can't be repaired because he is dead." << std::endl;
        return;
    }
    if (_energy < 1)
    {
        std::cout << "ClapTrap " << _name << " has not enough energy to be repaired." << std::endl;
        return;
    }
    _energy--;
    _hp += amount;
    std::cout << "ClapTrap " << _name << " is repaired of " << amount << " points of damage!" << std::endl;
}
