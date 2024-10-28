/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:43:43 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/23 21:08:54 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    int _hp;
    int _energy;
    int _attack_damage;
public:
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap& other);
    ClapTrap(const ClapTrap& other);
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


