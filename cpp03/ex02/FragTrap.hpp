/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:08:15 by edegraev          #+#    #+#             */
/*   Updated: 2024/09/27 10:10:16 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
private:
	/* data */
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap& operator=(const FragTrap& other);
	FragTrap(const FragTrap& other);
	
	void highFivesGuys(void);
	void attack(const std::string& target);
};


