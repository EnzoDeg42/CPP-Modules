/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:08:11 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/27 10:10:34 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	_hp = 100;
	_energy = 100;
	_attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_energy = other._energy;
		_attack_damage = other._attack_damage;
	}
	return *this;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

void FragTrap::highFivesGuys()
{
	if (_hp < 1)
	{
		std::cout << "FragTrap " << _name << " can't high five because he is dead." << std::endl;
		return;
	}
	if (_energy < 1)
	{
		std::cout << "FragTrap " << _name << " has not enough energy to high five." << std::endl;
		return;
	}
	_energy--;
	std::cout << "FragTrap " << _name << " high fives guys." << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (_hp < 1)
	{
		std::cout << "FragTrap " << _name << " can't attack because he is dead." << std::endl;
		return;
	}
	if (_energy < 1)
	{
		std::cout << "FragTrap " << _name << " has not enough energy to attack." << std::endl;
		return;
	}
	_energy--;
	std::cout << "FragTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}