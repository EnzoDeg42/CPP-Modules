/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:03:57 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/27 10:07:14 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_hp = 100;
	_energy = 50;
	_attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_energy = other._energy;
		_attack_damage = other._attack_damage;
	}
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

void ScavTrap::guardGate()
{
	if (_hp < 1)
	{
		std::cout << "ScavTrap " << _name << " can't guard the gate because he is dead." << std::endl;
		return;
	}
	if (_energy < 1)
	{
		std::cout << "ScavTrap " << _name << " has not enough energy to guard the gate." << std::endl;
		return;
	}
	_energy--;
	std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hp < 1)
    {
        std::cout << "ScavTrap " << _name << " can't attack because he is dead." << std::endl;
        return;
    }
    if (_energy < 1)
    {
        std::cout << "ScavTrap " << _name << " has not enough energy to attack." << std::endl;
        return;
    }
    _energy--;
    std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}
